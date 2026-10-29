// One and Two (Codeforces 1788A)
// https://codeforces.com/problemset/problem/1788/A
// Smallest k where the count of 2s on each side is equal.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;

        int ans = -1;
        for(int k = 1; k <= n-1; k++){
            int leftCount = 0, rightCount = 0;

            for(int i = 0; i < k; i++)
                if(a[i] == 2) leftCount++;

            for(int i = k; i < n; i++)
                if(a[i] == 2) rightCount++;

            if(leftCount == rightCount){
                ans = k;
                break;
            }
        }
        cout << ans << "\n";
    }
}