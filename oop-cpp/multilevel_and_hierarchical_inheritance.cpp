// Multilevel and hierarchical inheritance.

#include <iostream>
using namespace std;
class Base {
public:
    void showBase() {
        cout << "Base class" << endl;
    }
};
class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "Derived1 class (Inherited from Base)" << endl;
    }
};
class Derived2 : public Derived1 {
public:
    void showDerived2() {
        cout << "Derived2 class (Multilevel Inheritance)" << endl;
    }
};
class Derived3 : public Base {
public:
    void showDerived3() {
        cout << "Derived3 class (Hierarchical Inheritance)" << endl;
    }
};

int main() {
    cout << "\nMultilevel Inheritance :" << "\n";
    Derived2 obj1;  
    obj1.showBase();
    obj1.showDerived1();  
    obj1.showDerived2();  

    cout << "\nHierarchical Inheritance :" << endl;
    Derived3 obj2;  
    obj2.showBase(); 
    obj2.showDerived3();
}
