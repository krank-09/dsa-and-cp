// Iterative binary search on a sorted array; also counts the iterations. O(log n).

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key, int &iterations) {
    int left = 0, right = n - 1;
    iterations = 0;
    while (left <= right) {
        iterations++;
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[11] = {1,3,5,7,9,11,13,15,17,19,21};
    int n = 11;
    int key, iterations;

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key, iterations);

    if (result != -1)
        cout << "Element found at index " << result << " in " << iterations << " iterations \n(";
    else
        cout << "Element not found in " << iterations << " iterations (";

    // Best case: key is at the middle
    cout << "Best case: 1 iteration, ";
   
    // Worst case: ceil(log2(n+1))
    int worst = 0, temp = n;
    while (temp > 0) {
        temp /= 2;
        worst++;
    }
    cout << "Worst case: " << worst << " iterations for n = " << n << ")." << endl;

    return 0;
}

// try to come up with a formula for worst case number of iterations
// (look for 5,8,10,15,20 items)
// Worst case: ceil(log2(n+1))