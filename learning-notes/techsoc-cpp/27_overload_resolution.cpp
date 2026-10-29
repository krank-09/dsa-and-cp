// Class 27: how overloaded function calls are resolved.

// function call
// 1.exact match
// 2.Type promotion
// 3.Type conversion
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"A"<<"\n";
    }
};
class B{
    public:
    void show(){ // the func is prioritised by the call of the object
        cout<<"B"<<"\n"; // if the show func had not been defined in the class B, 
        //then the show func of class A would have been called
    }
};
int main(){
    A a;
    B b;
    a.show();
    b.show();
}
// in inheritance, the functions have 2 types of binding:
// 1. Early binding(static binding)
// 2. Late binding(dynamic binding)
// parent class pointer can store the varaibles of a child class