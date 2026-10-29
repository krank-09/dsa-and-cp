// Deque: std::deque operations, plus an array-based class version (commented out).

// declare queue in C++
#include <iostream>
using namespace std;
#include<deque>
int main() {
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(5);
    cout<<"Element at front: "<<d.front()<<"\n";
    cout<<"Element at back: "<<d.back()<<"\n";
    cout<<"Deque size: "<<d.size()<<"\n";
    d.pop_back();
    cout<<"After pop_back, element at back: "<<d.back()<<"\n";  
    d.pop_front();
    cout<<"After pop_front, element at front: "<<d.front()<<"\n";  
}

// declare w/o in-built functions , use class
// #include <iostream>
// using namespace std;

// class Deque {
// private:
//     int arr[100];
//     int front;
//     int rear;
// public:
//     Deque() {
//         front = -1;
//         rear = -1;
//     }
//     void push_front(int x) {
//         if (front == 0) {
//             cout << "Deque is full\n";
//             return;
//         }
//         if (front == -1) {
//             front = 0;
//             rear = 0;
//         } else {
//             front--;
//         }
//         arr[front] = x;
//     }
//     void push_back(int x) {
//         if (rear == 99) {
//             cout << "Deque is full\n";
//             return;
//         }
//         if (rear == -1) {
//             front = 0;
//             rear = 0;
//         } else {
//             rear++;
//         }
//         arr[rear] = x;
//     }
//     void pop_front() {
//         if (front == -1) {
//             cout << "Deque is empty\n";
//             return;
//         }
//         if (front == rear) {
//             front = -1;
//             rear = -1;
//         } else {
//             front++;
//         }
//     }
//     void pop_back() {
//         if (rear == -1) {
//             cout << "Deque is empty\n";
//             return;
//         }
//         if (front == rear) {
//             front = -1;
//             rear = -1;
//         } else {
//             rear--;
//         }
//     }
//     int get_front() {
//         if (front == -1) {
//             cout << "Deque is empty\n";
//             return -1;
//         }
//         return arr[front];
//     }
//     int get_back() {
//         if (rear == -1) {
//             cout << "Deque is empty\n";
//             return -1;
//         }
//         return arr[rear];
//     }
//     bool is_empty() {
//         return front == -1;
//     }
// };

// int main() {
//     Deque d;
//     d.push_back(10);
//     d.push_back(20);
//     d.push_front(5);
//     cout << "Element at front: " << d.get_front() << "\n";
//     cout << "Element at back: " << d.get_back() << "\n";
//     cout << "Deque size: " << (d.is_empty() ? 0 : d.get_back() - d.get_front() + 1) << "\n";
//     d.pop_back();
//     cout << "After pop_back, element at back: " << d.get_back() << "\n";
//     d.pop_front();
//     cout << "After pop_front, element at front: " << d.get_front() << "\n";
// }