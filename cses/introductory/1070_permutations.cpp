// Permutations (CSES 1070)
// https://cses.fi/problemset/task/1070
// Print evens then odds; n = 2 and 3 have no solution.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 2; i <= n; i += 2)
        cout << i << " ";
    
    for (int i = 1; i <= n; i += 2)
        cout << i << " ";
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n];
//     if(n<=3)
//         cout<<"NO SOLUTION";
//     else{
//         for(int i=0;i<n;i++){
//             if(i % 2 == 0)
//                 a[i] = i / 2 + 1; 
//             else
//                 a[i] = n - i / 2; 
//         }
//         for(int i=0;i<n;i++){
//             cout << a[i] << " "; 
//         }
//     }
// }
