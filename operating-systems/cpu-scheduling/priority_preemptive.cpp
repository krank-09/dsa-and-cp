// Preemptive priority scheduling (lower number = higher priority) with a Gantt chart.

#include <iostream>
#include <vector>
#include <climits>
#include <iomanip>
using namespace std;

struct Process {
    int pid, at, bt, pr;
    int rt, ct, tat, wt;
};

struct Gantt {
    int pid;
    int start, end;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Process> p(n);
    for (int i = 0; i < n; ++i) {
        p[i].pid = i + 1;
        cin >> p[i].at >> p[i].bt >> p[i].pr;
        p[i].rt = p[i].bt;
        p[i].ct = p[i].tat = p[i].wt = 0;
    }

    int completed = 0, time = 0;
    int lastPid = -1;
    vector<Gantt> gantt;

    auto pickProcess = [&](int t) -> int {
        int idx = -1;
        for (int i = 0; i < n; ++i) {
            if (p[i].at <= t && p[i].rt > 0) {
                if (idx == -1 ||
                    p[i].pr < p[idx].pr ||
                    (p[i].pr == p[idx].pr && p[i].at < p[idx].at) ||
                    (p[i].pr == p[idx].pr && p[i].at == p[idx].at && p[i].pid < p[idx].pid)) {
                    idx = i;
                }
            }
        }
        return idx;
    };

    int firstArrival = INT_MAX;
    for (auto &x : p) firstArrival = min(firstArrival, x.at);
    time = firstArrival;

    while (completed < n) {
        int idx = pickProcess(time);

        if (idx == -1) {
            if (lastPid != -1) {
                gantt.back().end = time;
                lastPid = -1;
            }
            ++time;
            continue;
        }

        if (lastPid != p[idx].pid) {
            if (!gantt.empty() && gantt.back().end == -1) gantt.back().end = time;
            gantt.push_back({p[idx].pid, time, -1});
            lastPid = p[idx].pid;
        }

        p[idx].rt--;
        time++;

        if (p[idx].rt == 0) {
            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            completed++;
        }
    }

    if (!gantt.empty() && gantt.back().end == -1) gantt.back().end = time;

    cout << "PID\tAT\tBT\tPR\tCT\tTAT\tWT\n";
    double avgTAT = 0, avgWT = 0;

    sort(p.begin(), p.end(), [](const Process& a, const Process& b) {
        return a.pid < b.pid;
    });

    for (const auto &x : p) {
        cout << "P" << x.pid << "\t"
             << x.at << "\t"
             << x.bt << "\t"
             << x.pr << "\t"
             << x.ct << "\t"
             << x.tat << "\t"
             << x.wt << "\n";
        avgTAT += x.tat;
        avgWT += x.wt;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Turnaround Time = " << avgTAT / n << "\n";
    cout << "Average Waiting Time    = " << avgWT / n << "\n";

    cout << "\nGantt Chart:\n";
    for (const auto &g : gantt) {
        cout << "| P" << g.pid << " ";
    }
    cout << "|\n";
    cout << gantt.front().start;
    for (const auto &g : gantt) {
        cout << setw(4) << g.end;
    }
    cout << "\n";

    return 0;
}