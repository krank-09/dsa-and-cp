// Blank Space (Codeforces 1829B)
// https://codeforces.com/problemset/problem/1829/B
// Longest run of zeros.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc ; cin >> tc ;
    while(tc--){
        int n ; cin >> n ;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        for(int i = 0 ; i < n ; i++){
            if(v[i] == 0) {
                int j = i + 1 ;
                v[j] == 0 ;
                j++ ;
            }
        }
    }
}