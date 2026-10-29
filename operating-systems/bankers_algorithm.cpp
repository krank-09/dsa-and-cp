// Banker's algorithm safety check: prints a safe sequence if one exists.

// bandea.cpp
// Banker's algorithm - safety check
// Input format:
// n m
// allocation matrix (n rows, m cols)
// max matrix (n rows, m cols)
// available vector (m values)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<int>> alloc(n, vector<int>(m));
    vector<vector<int>> maxi(n, vector<int>(m));
    vector<int> avail(m);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> alloc[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> maxi[i][j];

    for (int j = 0; j < m; ++j)
        cin >> avail[j];

    vector<vector<int>> need(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            need[i][j] = maxi[i][j] - alloc[i][j];

    vector<int> work = avail;
    vector<bool> finish(n, false);
    vector<int> safeSeq;
    bool progress = true;

    while (progress) {
        progress = false;
        for (int i = 0; i < n; ++i) {
            if (finish[i]) continue;
            bool ok = true;
            for (int j = 0; j < m; ++j)
                if (need[i][j] > work[j]) { ok = false; break; }
            if (ok) {
                for (int j = 0; j < m; ++j) work[j] += alloc[i][j];
                finish[i] = true;
                safeSeq.push_back(i);
                progress = true;
            }
        }
    }

    if ((int)safeSeq.size() == n) {
        cout << "System is in a safe state.\nSafe sequence:";
        for (int i = 0; i < n; ++i) cout << " P" << safeSeq[i];
        cout << "\n";
    } else {
        cout << "System is NOT in a safe state.\n";
    }

    return 0;
}