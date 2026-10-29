// Repetitions (CSES 1069)
// https://cses.fi/problemset/task/1069
// Longest run of the same character in one pass.

#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;

    long long int maxCount = 1, currentCount = 1;
    int n = s.length();

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            currentCount++;
        } else {
            maxCount = max(maxCount, currentCount);
            currentCount = 1;
        }
    }
    maxCount = max(maxCount, currentCount); 

    cout << maxCount;
}
