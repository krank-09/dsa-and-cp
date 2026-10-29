// Greatest of three numbers with if-else.

// greatest of 3 nums using if loop
#include<iostream>
using namespace std;
int main (){
    int n1,n2,n3;
    cout<<"enter three numbers : ";
    cin>>n1>>n2>>n3;
    if (n1>n2 && n1>n3)
        cout<<n1<<" is the greatest.";
    else if(n2>n1 && n2>n3)
        cout<<n2<<" is the greatest.";
    else if(n3>n1 && n3>n1)
        cout<<n3<<" is the greatest.";      
}