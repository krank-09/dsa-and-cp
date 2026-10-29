// ABC400 A - ABC400 Party
// https://atcoder.jp/contests/abc400/tasks/abc400_a
// Answer is 400 / A if A divides 400, else -1.

#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b = 400/a;
    if(a*b == 400){
        cout<<b;
    }
    else 
        cout<<"-1";
}