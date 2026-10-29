// Single inheritance.

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating.\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking.\n";
    }
};

class Engine {
public:
    void start() {
        cout << "Engine started.\n";
    }
};

class Wheels {
public:
    void rotate() {
        cout << "Wheels are rotating.\n";
    }
};

class Car : public Engine, public Wheels { 
public:
    void drive() {
        cout << "Car is driving.\n";
    }
};

class Person {
public:
    void speak() {
        cout << "Person is speaking.\n";
    }
};

class Employee : public Person { 
public:
    void work() {
        cout << "Employee is working.\n";
    }
};

class Manager : public Employee {
public:
    void manage() {
        cout << "Manager is managing the team.\n";
    }
};

int main() {
   
    Dog d;
    d.eat();  
    d.bark(); 

    Car c;
    c.start();  
    c.rotate(); 
    c.drive(); 

    Manager m;
    m.speak();  
    m.work();   
    m.manage(); 
}


