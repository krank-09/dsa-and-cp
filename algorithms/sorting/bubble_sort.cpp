// Bubble sort with early exit; counts comparisons for a random and a reverse-sorted array.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int &comparisons) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; 
        // Best case: already sorted
    }
}

int main() {
    const int n = 10;
    int arr[n] = {5, 1, 4, 2, 8, 0, 2, 9, 6, 7};
    int comparisons = 0;

    // Worst case: reverse sorted array
    int worstArr[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int worstComparisons = 0;
    bubbleSort(worstArr, n, worstComparisons);

    // Best case: already sorted array
    int bestArr[n] = {1,2,3,4,5,6,7,8,9,10};
    int bestComparisons = 0;
    bubbleSort(bestArr, n, bestComparisons);

    cout << "Bubble Sort on 10 items:\n";
    cout << "Best case comparisons: " << bestComparisons << endl;
    cout << "Worst case comparisons: " << worstComparisons << endl;

    return 0;
}

// try to come up with a formula for worst case number of iterations
// (look for 5,8,10,15,20 items)
// Worst case: n*(n-1)/2 comparisons