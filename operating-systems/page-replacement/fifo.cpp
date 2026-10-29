// FIFO page replacement: counts page hits and faults.

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <iomanip>

using namespace std;

int main() {
    int n, capacity;

    cout << "Enter number of pages in reference string: ";
    cin >> n;

    vector<int> pages(n);
    cout << "Enter reference string: ";
    for (int i = 0; i < n; ++i) {
        cin >> pages[i];
    }

    cout << "Enter number of frames: ";
    cin >> capacity;

    vector<int> frames;
    queue<int> fifoOrder;
    unordered_set<int> inFrame;

    int hits = 0, faults = 0;

    cout << "\nStep\tPage\tResult\tFrames\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < n; ++i) {
        int page = pages[i];

        if (inFrame.count(page)) {
            hits++;
            cout << i + 1 << "\t" << page << "\tHit\t";
        } else {
            faults++;
            cout << i + 1 << "\t" << page << "\tFault\t";

            if ((int)frames.size() < capacity) {
                frames.push_back(page);
                inFrame.insert(page);
                fifoOrder.push(page);
            } else {
                int victim = fifoOrder.front();
                fifoOrder.pop();
                inFrame.erase(victim);

                for (int &f : frames) {
                    if (f == victim) {
                        f = page;
                        break;
                    }
                }

                inFrame.insert(page);
                fifoOrder.push(page);
            }
        }

        for (int f : frames) cout << f << " ";
        cout << "\n";
    }

    cout << "\nTotal Hits   : " << hits << "\n";
    cout << "Total Faults : " << faults << "\n";
    cout << "Hit Ratio    : " << fixed << setprecision(2)
         << (n ? (double)hits / n : 0.0) << "\n";
    cout << "Fault Ratio  : " << fixed << setprecision(2)
         << (n ? (double)faults / n : 0.0) << "\n";

    return 0;
}