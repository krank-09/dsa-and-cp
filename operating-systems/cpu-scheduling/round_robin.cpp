// Round-robin scheduling with a time quantum: completion, turnaround and waiting times.

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <numeric>
using namespace std;

struct Process {
    int pid;
    int at;   
    int bt;   
    int rt;   
    int ct;   
    int tat;  
    int wt;   
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);
    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        p[i].pid = i + 1;
        cin >> p[i].at >> p[i].bt;
        p[i].rt = p[i].bt;
        p[i].ct = p[i].tat = p[i].wt = 0;
    }

    cout << "Enter time quantum: ";
    cin >> q;

    // Sort by arrival time, then pid
    vector<int> order(n);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(), [&](int a, int b) {
        if (p[a].at == p[b].at) return p[a].pid < p[b].pid;
        return p[a].at < p[b].at;
    });

    queue<int> rq;
    int time = 0, done = 0, idx = 0;

    while (done < n) {
        // Push all processes that have arrived by current time
        while (idx < n && p[order[idx]].at <= time) {
            rq.push(order[idx]);
            idx++;
        }

        // If queue is empty, jump to next arrival time
        if (rq.empty()) {
            if (idx < n) {
                time = max(time, p[order[idx]].at);
                continue;
            }
        }

        int i = rq.front();
        rq.pop();

        int run = min(q, p[i].rt);
        p[i].rt -= run;
        time += run;

        // Add newly arrived processes during this run
        while (idx < n && p[order[idx]].at <= time) {
            rq.push(order[idx]);
            idx++;
        }

        if (p[i].rt > 0) {
            rq.push(i);
        } else {
            p[i].ct = time;
            p[i].tat = p[i].ct - p[i].at;
            p[i].wt = p[i].tat - p[i].bt;
            done++;
        }
    }

    double avgTAT = 0.0, avgWT = 0.0;

    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
    for (const auto &pr : p) {
        cout << "P" << pr.pid << '\t'
             << pr.at << '\t'
             << pr.bt << '\t'
             << pr.ct << '\t'
             << pr.tat << '\t'
             << pr.wt << '\n';
        avgTAT += pr.tat;
        avgWT += pr.wt;
    }

    avgTAT /= n;
    avgWT /= n;

    cout << fixed << setprecision(2);
    cout << "\nAverage Turnaround Time: " << avgTAT << '\n';
    cout << "Average Waiting Time   : " << avgWT << '\n';

    return 0;
}