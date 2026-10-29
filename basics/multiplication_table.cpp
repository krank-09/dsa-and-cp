// Multiplication table of n.

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n, r, original_n;
    stack<int> s1, s2;
    cout<<"Enter a +ve number: ";
    cin>>n;
    original_n = n;
    while(n>0){
        r=n%10;
        s1.push(r);     
        n=n/10;
    }
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    cout<<"Multiplication Table of "<<original_n<<" is:\n";
    for(int i=1; i<=10; i++){
        cout<<original_n<<" * "<<i<<" = "<<original_n*i<<"\n";
    }
}
