// Weird Algorithm (CSES 1068)
// https://cses.fi/problemset/task/1068
// Simulate the steps; values can exceed int, so use long long.

#include<iostream>
using namespace std;
int main(){
    long long int n; cin>>n;
    cout << n << " ";
    while (n > 1)
    {
        if(n % 2 == 0)
            n /= 2;
        else
            n = (n *3) + 1;
        cout << n << " ";
    }
}