// Producer-consumer with a bounded buffer, using POSIX threads and semaphores.

#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <dispatch/dispatch.h>  // macOS native semaphores
#include <unistd.h>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BUFFER_SIZE = 5;
queue<int> buffer;

// Replace sem_t with dispatch_semaphore_t
dispatch_semaphore_t emptySlots;
dispatch_semaphore_t fullSlots;
mutex mtx;

void producer(int id, int itemsToProduce) {
    for (int i = 0; i < itemsToProduce; ++i) {
        int item = rand() % 100;

        dispatch_semaphore_wait(emptySlots, DISPATCH_TIME_FOREVER);  // sem_wait

        {
            lock_guard<mutex> lock(mtx);
            buffer.push(item);
            cout << "Producer " << id << " produced " << item << endl;
        }

        dispatch_semaphore_signal(fullSlots);  // sem_post
        sleep(1);
    }
}

void consumer(int id, int itemsToConsume) {
    for (int i = 0; i < itemsToConsume; ++i) {
        dispatch_semaphore_wait(fullSlots, DISPATCH_TIME_FOREVER);  // sem_wait

        int item;
        {
            lock_guard<mutex> lock(mtx);
            item = buffer.front();
            buffer.pop();
            cout << "Consumer " << id << " consumed " << item << endl;
        }

        dispatch_semaphore_signal(emptySlots);  // sem_post
        sleep(1);
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Replace sem_init
    emptySlots = dispatch_semaphore_create(BUFFER_SIZE);  // all slots empty
    fullSlots  = dispatch_semaphore_create(0);             // no items yet

    int items = 10;

    thread p1(producer, 1, items);
    thread c1(consumer, 1, items);

    p1.join();
    c1.join();

    // No sem_destroy needed — ARC handles dispatch objects

    return 0;
}