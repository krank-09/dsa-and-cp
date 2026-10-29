// Coins (Codeforces 1814A)
// https://codeforces.com/problemset/problem/1814/A
// YES if n is even or k is odd.

#include<iostream>
using namespace std;
int main(){
    int tc ; cin >> tc;
    while(tc--){
        int n , k ; cin >> n >> k;  
        if(n % 2 == 0 || k % 2 != 0) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
}