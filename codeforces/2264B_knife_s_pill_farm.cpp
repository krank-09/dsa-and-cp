// Knife's Pill Farm (Codeforces 2264B)
// https://codeforces.com/problemset/problem/2264/B

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n, m; cin >> n >> m;
        vector<long long> a(n);
        for(auto& x : a) cin >> x;

        priority_queue<long long> pq;
        long long heapSum = 0;
        long long ans = LLONG_MIN;

        for(int j = 0; j < n; j++){
            if((int)pq.size() == m - 1){
                ans = max(ans, (long long)m * a[j] - heapSum);
            }

            if((int)pq.size() < m - 1){
                pq.push(a[j]);
                heapSum += a[j];
            } else if(!pq.empty() && a[j] < pq.top()){
                heapSum -= pq.top();
                pq.pop();
                pq.push(a[j]);
                heapSum += a[j];
            }
        }

        cout << ans << "\n";
    }
}