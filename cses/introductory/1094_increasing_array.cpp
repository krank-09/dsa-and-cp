// Increasing Array (CSES 1094)
// https://cses.fi/problemset/task/1094
// Raise each element to the previous one and add up the moves.

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long moves = 0;  

    for (int i = 1; i < n; i++) { 
        if (arr[i] < arr[i - 1]) {
            moves += arr[i - 1] - arr[i];  
            arr[i] = arr[i - 1];  
        }
    }

    cout << moves;
}
