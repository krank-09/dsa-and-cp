// Two Permutations (Codeforces 1761A)
// https://codeforces.com/problemset/problem/1761/A
// YES if a = b = n, or a + b + 2 <= n.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; cin >> t ;
    while(t--){
        int n , a, b ;
        cin >> n >> a >> b ;
        if(a == n && b == n){
            cout << "YES\n" ;
        }else if(a + b + 2 <= n){
            cout << "YES\n" ;
        }else cout << "NO\n" ;
    }
}