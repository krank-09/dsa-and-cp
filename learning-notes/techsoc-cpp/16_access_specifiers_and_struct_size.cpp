// Class 16: access specifiers and struct size.

//1.access specifier
//1.1 public
//1.2 private
//1.3 protected
// size of empty structure in c++ is 1 byte
// size of empty structure in c is 0 byte
#include<iostream>
using namespace std;
struct A{
    int x;
    double t;
};
struct B{
    char p;
    A A1;
};
int main(){
    A A1;
    cout<<sizeof(struct A)<<"\n";
    cout<<sizeof(struct B);
    cout<<alignof(A1);
    cout<<alignof(A1);
}