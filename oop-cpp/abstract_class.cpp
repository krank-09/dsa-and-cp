// Abstract class.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; 

    void display() {
        cout << "This is a shape.\n";
    }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }
    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) { length = l; breadth = b; }
    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    c.display();
    c.area(); 
    r.display();
    r.area();
}
