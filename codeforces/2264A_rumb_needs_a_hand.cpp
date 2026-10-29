// Rumb Needs a Hand (Codeforces 2264A)
// https://codeforces.com/problemset/problem/2264/A

#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n ; cin >> n ;
        vector<int> a(n);
        for(auto& x : a) cin >> x;

        vector<int> bad;
        for(int i = 0; i < n; i++)
            if(a[i] != i+1) bad.push_back(i);

        if(bad.empty()){
            cout << "YES\n";
            continue;
        }

        vector<int> vals;
        for(int idx : bad) vals.push_back(a[idx]);
        reverse(vals.begin(), vals.end());

        bool ok = true;
        for(int j = 0; j < (int)bad.size(); j++){
            if(vals[j] != bad[j]+1){ ok = false; break; }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}