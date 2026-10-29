// Fighting Tournament (Codeforces 1719C)
// https://codeforces.com/problemset/problem/1719/C
// Simulate n - 1 rounds with a deque; after that the strongest wins every round.

#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n, q;
        cin >> n >> q;

        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];

        vector<vector<int>> win_rounds(n+1);

        deque<int> dq;
        for(int i = 1; i <= n; i++) dq.push_back(i);

        int champion = -1;
        int champ_first_win = -1;

        for(int round = 1; round <= n-1; round++){
            int p1 = dq[0], p2 = dq[1];
            dq.pop_front(); dq.pop_front();

            int winner = (a[p1] > a[p2]) ? p1 : p2;
            int loser  = (a[p1] > a[p2]) ? p2 : p1;

            win_rounds[winner].push_back(round);

            dq.push_front(winner);
            dq.push_back(loser);
        }


        champion = dq[0];
        if(!win_rounds[champion].empty())
            champ_first_win = win_rounds[champion][0];
        else
            champ_first_win = n; 

        while(q--){
            int i, k;
            cin >> i >> k;

            int sim_k = min(k, n-1);
            auto& wr = win_rounds[i];
            int sim_wins = (int)(upper_bound(wr.begin(), wr.end(), sim_k) - wr.begin());

            int extra = 0;
            if(i == champion && k >= n){
                extra = k - (n-1);
            }

            cout << sim_wins + extra << "\n";
        }
    }
}