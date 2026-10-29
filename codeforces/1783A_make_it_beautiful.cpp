// Make it Beautiful (Codeforces 1783A)
// https://codeforces.com/problemset/problem/1783/A
// Put the largest element first; impossible only if all are equal.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;

        sort(a.begin(), a.end());

        if(a[0] == a[n-1]){
            cout << "NO\n";
            continue;
        }

        vector<int> result;
        result.push_back(a[n-1]);
        for(int i = 0; i < n-1; i++) result.push_back(a[i]);

        bool beautiful = true;
        int prefix = 0;
        for(int x : result){
            if(x == prefix){ beautiful = false; break; }
            prefix += x;
        }

        if(beautiful){
            cout << "YES\n";
            for(int i = 0; i < n; i++) cout << result[i] << " \n"[i==n-1];
        } else {
            cout << "NO\n";
        }
    }
}