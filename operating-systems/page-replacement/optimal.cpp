// Optimal (Belady) page replacement: evicts the page used furthest in the future.

// oppare.cpp - Optimal (Belady) Page Replacement Simulation
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int frames;
	if (!(cin >> frames)) return 0;

	vector<int> refs;
	int x;
	while (cin >> x) refs.push_back(x);
	int n = refs.size();
	if (frames <= 0) {
		cout << "Page faults: " << n << '\n';
		return 0;
	}

	unordered_map<int, vector<int>> positions;
	positions.reserve(n * 2 + 1);
	for (int i = 0; i < n; ++i) positions[refs[i]].push_back(i);

	unordered_set<int> frameSet;
	vector<int> frameList; // holds current pages in frames
	int faults = 0;

	for (int i = 0; i < n; ++i) {
		int page = refs[i];
		if (frameSet.count(page)) {
			continue; // hit
		}

		++faults;
		if ((int)frameSet.size() < frames) {
			frameSet.insert(page);
			frameList.push_back(page);
			continue;
		}

		// Choose victim: page with farthest next use (or never used again)
		int victim = -1;
		int farthest = -1;
		for (int p : frameList) {
			// find next occurrence of p after index i
			auto &vec = positions[p];
			auto it = upper_bound(vec.begin(), vec.end(), i);
			int nextIdx = (it == vec.end()) ? INT_MAX : *it;
			if (nextIdx > farthest) {
				farthest = nextIdx;
				victim = p;
			}
		}

		// replace victim with current page
		frameSet.erase(victim);
		for (int &v : frameList) if (v == victim) { v = page; break; }
		frameSet.insert(page);
	}

	cout << "Page faults: " << faults << '\n';
	return 0;
}