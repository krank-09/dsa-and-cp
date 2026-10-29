// while vs do-while loops.

#include <iostream>
using namespace std;
int main() {
    int count = 0;

    // while loop
    cout << "While loop:" << endl;
    while (count < 5) {
        cout << "Count is: " << count << endl;
        count++;
    }

    count = 0; 

    // do-while loop
    cout << "Do-while loop:" << endl;
    do {
        cout << "Count is: " << count << endl;
        count++;
    } while (count < 5);
}