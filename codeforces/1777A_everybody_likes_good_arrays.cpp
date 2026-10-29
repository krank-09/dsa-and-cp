// Everybody Likes Good Arrays! (Codeforces 1777A)
// https://codeforces.com/problemset/problem/1777/A
// Count adjacent pairs with the same parity.

#include<iostream>
#include<vector>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc ; cin >> tc ;
    while(tc--){
        int n ; cin >> n ;
        vector<int>a(n);
        for(auto& x : a ) cin >> x ;
        int ops = 0 ;
        for(int i = 0 ; i < n-1 ; i++){
            if(a[i]%2 ==  a[i+1]%2) ops++ ;
        }
        cout << ops << "\n" ;
    }
}