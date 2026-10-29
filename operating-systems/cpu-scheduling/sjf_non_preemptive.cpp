// Shortest job first (non-preemptive).
// Note: this sorts by arrival time, then burst time, so it matches true SJF only
// when processes arrive together. A fix is to pick the shortest job among those already arrived.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    
    vector<Process> processes(n);
    
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }
    
    // Sort by arrival time, then by burst time
    sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        if (a.arrivalTime == b.arrivalTime)
            return a.burstTime < b.burstTime;
        return a.arrivalTime < b.arrivalTime;
    });
    
    int currentTime = 0;
    float totalTurnaroundTime = 0, totalWaitingTime = 0;
    
    for (int i = 0; i < n; i++) {
        if (currentTime < processes[i].arrivalTime)
            currentTime = processes[i].arrivalTime;
        
        currentTime += processes[i].burstTime;
        processes[i].completionTime = currentTime;
        processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
        processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;
        
        totalTurnaroundTime += processes[i].turnaroundTime;
        totalWaitingTime += processes[i].waitingTime;
    }
    
    cout << "\nProcess\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n";
    for (int i = 0; i < n; i++) {
        cout << processes[i].id << "\t" << processes[i].arrivalTime << "\t" 
             << processes[i].burstTime << "\t" << processes[i].completionTime 
             << "\t\t" << processes[i].turnaroundTime << "\t\t" 
             << processes[i].waitingTime << "\n";
    }
    
    cout << "\nAverage Turnaround Time: " << totalTurnaroundTime / n << "\n";
    cout << "Average Waiting Time: " << totalWaitingTime / n << "\n";
    
    return 0;
}