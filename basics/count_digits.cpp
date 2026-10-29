// Count the digits of a number.

// count the digits in an number
#include<iostream>
using namespace std;
int main(){
    long n, r;
    int count=0;
    cout<<"Enter a +ve number: ";
    cin>>n;
    while(n>0){
        r=n%10;
        count++;
        n=n/10;
    }
    cout<<"Number of digits: "<<count<<"\n";
}