// GCD of two numbers with Euclid's algorithm.

// gcd of 2 +ve numbers
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two positive numbers: ";
    cin>>a>>b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"GCD is: "<<a<<"\n";

}   