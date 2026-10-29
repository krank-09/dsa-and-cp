// Class 30: virtual inheritance and abstract classes.

// virtual inheritance 
// syntax => derived class : virtual public base class
// pure virtual function
// syntax => virtual return_type function_name() = 0;
// pure virtual class has no body in base class i.e abstract class
// every derived class overrides the pure virtual function
// abstract class cannot be instantiated i.e no object can be created
// if base class has pure virtual function then derived class must override it
// oterwise derived class will also become abstract class
// the virtual function does not have a body in the base class
// it can be given a body outside the class with scope resolution operator(::)
// only nonstatic member function may be virtual
// interface class is a type of abstract class with all the functions as pure virtual
#include<iostream>
using namespace std;
int main(){
    
} 
