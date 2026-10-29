// Forked! (Codeforces 1904A)
// https://codeforces.com/problemset/problem/1904/A
// Generate the (a, b) moves from king and queen and count common squares.

#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long xk, yk;
        cin >> xk >> yk;
        long long xq, yq;
        cin >> xq >> yq;

        int signs[] = {-1, 1};

        set<pair<long long, long long>> katta;
        set<pair<long long, long long>> qatta;

        for (int sx : signs)
        {
            for (int sy : signs)
            {
                katta.insert({xk + sx * a, sy * b + yk});
                qatta.insert({xq + sx * a, sy * b + yq});

                katta.insert({sx * b + xk, sy * a + yk});
                qatta.insert({sx * b + xq, sy * a + yq});
            }
        }
        int fork_pos = 0 ;
        for (const auto& pos : katta){
            if(qatta.count(pos)) fork_pos++;
        }
        cout << fork_pos << "\n";
    }
}