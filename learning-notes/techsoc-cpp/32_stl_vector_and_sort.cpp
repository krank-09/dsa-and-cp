// Class 32: std::vector and sort.

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
// int main(){
//     vector<int>arr(10);
//     for(int i = 0; i < 10; i++){
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     for(int i = 9; i >= 0; i--){
//         cout << arr[i] << " ";
//     }
//     cout<<"/n";
//     sort(arr.begin(), arr.end(), greater<int>());
//     for(int i = 0; i < 10; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     vector<pair<int, int>> arr = {{5,2},{3,1},{10,2},{4,8},{8,1},{2,5},{1,8},{1,3},{2,10},{8,4}};
//     for(int i = 0; i < 10; i++){
//         cout << arr[i].first <<" " << arr[i].second;
//         cout<<" ";
//     }
//     sort(arr.begin(),arr.end());// merge sort with O(nlogn) complexity
//     cout<<"\nAfter sorting\n";
//     for(int i = 0; i < 10; i++){
//         cout << arr[i].first << " " << arr[i].second << " ";
//     }
// }

// int main()
// {
//     vector<pair<int, int>> arr = {{5, 2}, {3, 1}, {10, 2}, {4, 8}, {8, 1}, {2, 5}, {1, 8}, {1, 3}, {2, 10}, {8, 4}};
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i].first << " " << arr[i].second;
//         cout << "\n";
//     }
//     cout << "\nAfter II sorting\n";
//     sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b)
//         {
//         if(a.first<b.first) return true;
//         if(a.first == b.first){
//             if(a.second > b.second) return true;
//         }
//         return false; });
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i].first << " " << arr[i].second << "\n";
//     }
// }

// int main(){
//     set<int,greater<int>>s;
//     s.insert(10);
//     s.insert(20);
//     s.insert(30);
//     s.insert(40);
//     for(auto it : s) cout << it << " ";
// }

