// ABC400 C - 2^a b^2
// https://atcoder.jp/contests/abc400/tasks/abc400_c
// Count numbers <= N of the form 2^a * b^2.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long count = 0;
    for (long long b = 1; b * b <= N; ++b) {
        long long val = b * b;
        while (val <= N) {
            count++;
            if (val > N / 2) break; 
            val *= 2;
        }
    }
    cout << count;
}
