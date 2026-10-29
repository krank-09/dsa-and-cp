// LRU (least recently used) page replacement: counts page hits and faults.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>

using namespace std;

int main() {
    int framesCount, n;
    cout << "Enter number of frames: ";
    cin >> framesCount;
    cout << "Enter number of page references: ";
    cin >> n;

    vector<int> pages(n);
    cout << "Enter page reference string: ";
    for (int i = 0; i < n; ++i) {
        cin >> pages[i];
    }

    vector<int> frames;
    unordered_map<int, int> lastUsed; // page -> last used index

    int pageFaults = 0, hits = 0;

    for (int i = 0; i < n; ++i) {
        int page = pages[i];
        bool found = false;

        for (int p : frames) {
            if (p == page) {
                found = true;
                break;
            }
        }

        if (found) {
            hits++;
        } else {
            pageFaults++;

            if ((int)frames.size() < framesCount) {
                frames.push_back(page);
            } else {
                // Find least recently used page in frames
                int lruPage = -1;
                int lruIndex = numeric_limits<int>::max();

                for (int p : frames) {
                    if (lastUsed.find(p) == lastUsed.end()) {
                        lruPage = p;
                        break;
                    }
                    if (lastUsed[p] < lruIndex) {
                        lruIndex = lastUsed[p];
                        lruPage = p;
                    }
                }

                // Replace lruPage with current page
                for (int j = 0; j < (int)frames.size(); ++j) {
                    if (frames[j] == lruPage) {
                        frames[j] = page;
                        break;
                    }
                }
            }
        }

        lastUsed[page] = i;
    }

    cout << "\nTotal Page Faults: " << pageFaults << '\n';
    cout << "Total Hits: " << hits << '\n';

    return 0;
}