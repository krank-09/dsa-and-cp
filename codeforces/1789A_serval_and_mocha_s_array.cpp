// Serval and Mocha's Array (Codeforces 1789A)
// https://codeforces.com/problemset/problem/1789/A
// YES if some pair has gcd <= 2.

#include<iostream>
#include<vector>
#include<numeric>
int greatestCommonDivisor(int a, int b){
    while(b != 0){
        int temp = b ;
        b = a % b ;
        a = temp ;
    }
    return a;
}
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc ; cin >> tc;
    while(tc--){
        int n ; cin >> n;
        vector<int> ar(n) ;
        for(auto& x : ar) cin >> x ;
        bool found = false ;
        for (int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if (greatestCommonDivisor(ar[i], ar[j]) <= 2) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    } 
}