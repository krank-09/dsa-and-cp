// First-come, first-served CPU scheduling: start, completion, turnaround and waiting times.

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Process {
    int id;
    int arrival;
    int burst;
    int start = 0;
    int completion = 0;
    int waiting = 0;
    int turnaround = 0;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<Process> p(n);
    for (int i = 0; i < n; ++i) {
        p[i].id = i + 1;
    }

    // Input format 
    // 4
    // 0 5
    // 1 3
    // 2 8
    // 3 6
    for (int i = 0; i < n; ++i) cin >> p[i].arrival >> p[i].burst;

    sort(p.begin(), p.end(), [](const Process &a, const Process &b) {
        if (a.arrival != b.arrival) return a.arrival < b.arrival;
        return a.id < b.id;
    });

    int current_time = 0;
    long long total_wait = 0, total_turnaround = 0;
    for (auto &proc : p) {
        proc.start = max(current_time, proc.arrival);
        proc.completion = proc.start + proc.burst;
        proc.turnaround = proc.completion - proc.arrival;
        proc.waiting = proc.start - proc.arrival;

        current_time = proc.completion;

        total_wait += proc.waiting;
        total_turnaround += proc.turnaround;
    }

    cout << "PID\tArrival\tBurst\tStart\tCompletion\tWaiting\tTurnaround\n";
    for (auto &proc : p) {
        cout << proc.id << '\t'
             << proc.arrival << '\t'
             << proc.burst << '\t'
             << proc.start << '\t'
             << proc.completion << '\t' << '\t'
             << proc.waiting << '\t'
             << proc.turnaround << '\n';
    }

    cout << fixed << setprecision(2);
    cout << "Average Waiting Time: " << (double)total_wait / n << '\n';
    cout << "Average Turnaround Time: " << (double)total_turnaround / n << '\n';

    return 0;
}