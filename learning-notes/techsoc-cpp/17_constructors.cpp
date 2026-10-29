// Class 17: constructors.

//constructors
// no return type
// same name as class
// called automatically when object is created
// used to initialize the object    
// types of constructors
// 1. Default constructor
// 2. Parameterized constructor
// 3. Copy constructor // called when an object is copied to another object i.e depends on another object
// once parameterized constructor is defined, default constructor is not called automatically
// once the costructor is invoked, it will hit and trial all the constructors to match either default or parameterized
// similar to func overloading
//constructor overloading is not possible
// 2.destrtuctors
// 2.1 called automatically when object is destroyed or when scope of object ends
// 2.2 takes no arguments
// 2.3 same name as class but with ~
// 2.4 no return type
// 2.5 no overloading
// heap memory is dynamically allocated 
#include<iostream>
using namespace std;
class complex{
    // private :
    //     int re,img;
    public : 
    int re,img;
    complex(){
        re=2;
        img=3;
    }
    complex(int r, int i){
        re=r;
        img=i;
    }
    // complex(complex c1, complex c2){
    //     re=c1.re+c2.re;
    //     img=c1.img+c2.img;
    // }
    void getInfo(complex c1, complex c2){
        char op;
        cin>>op;
        switch (op)
        {
        case '-':
            re=c1.re-c2.re;
            img=c1.img-c2.img;
            break;
        default:
            re=c1.re+c2.re;
            img=c1.img+c2.img;
            break;
        }
        
    }
};
int main(){
    int r,i;
    cout<<"enter real part of num : "; cin>>r;
    cout<<"enter imaginary part of num : "; cin>>i;
    complex c1;
    complex c2(r,i);
    complex c3;
    // complex c3(c1,c2);
    c3.getInfo(c1, c2); // needs to be called in an instance of class not directly
    cout<<c1.re<<" + "<<c1.img<<"i"<<"\n"<<c2.re<<" + "<<c2.img<<"i"<<"\n";
    cout<<c3.re<<" + "<<c3.img<<"i";
}

// this pointer
// local object pointer i.e available in every instance member function
// contains address of called object
// 