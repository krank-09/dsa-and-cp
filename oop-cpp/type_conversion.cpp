// Type conversion between basic types and classes.

#include <iostream>
using namespace std;

class converter {
public:
    int add(int a, int b) {
        cout << "Integer addition: ";
        return a + b;
    }

    double add(double a, double b) {
        cout << "Double addition: ";
        return a + b;
    }

    double add(int a, double b) {
        cout << "Mixed addition (int -> double): ";
        return a + b;
    }
};

int main() {
    converter conv;
    cout << conv.add(5, 10) << endl;
    cout << conv.add(3.5, 2.5) << endl;
    cout << conv.add(7, 4.2) << endl;
    cout << conv.add(static_cast<int>(4.8), 2) << endl;

    return 0;
}
