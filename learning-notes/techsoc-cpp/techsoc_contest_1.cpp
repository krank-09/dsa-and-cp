// TechSoc contest 1 solutions.

//question 1
// #include <iostream>
// using namespace std;
//     int main() {
//     int t;
//     cin >> t; 
//     while (t--) {
//         string word;
//         cin >> word; 
//         word = word.substr(0, word.size() - 2) + "i";
//         cout << word << endl;
//     }
// }


//question 2
// #include <iostream>
// using namespace std;
// int minPossibleLength(string s) {
//     int n = s.size();
//     int newLength = 1; 
//     for (int i = 1; i < n; i++) {
//         if (s[i] != s[i - 1]) { 
//             newLength++;
//         }
//     }
//     return newLength;
// }
// int main() {
//     int t;
//     cin >> t;  
//     while (t--) {
//         string s;
//         cin >> s;
//         cout << minPossibleLength(s) << endl;
//     }
// }


//question 3(1)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) 
//         cin >> a[i];
//     int B;
//     cin >> B;
//     vector<int> possible_values;
//     for (int i = 0; i < n; i++) {
//         possible_values.push_back(a[i]);       
//         possible_values.push_back(B - a[i]);   
//     }
//     sort(possible_values.begin(), possible_values.end());
//     for (int i = 0; i < n; i++) {
//         if (possible_values[i] > possible_values[i + 1]) {
//             cout << "NO\n";
//             return;
//         }
//     }
//     cout << "YES\n";
// }
// int main() {
//     int t;
//     cin >> t; 
//     while (t--) {
//         solve();
//     }
// }


#include <iostream>
#include <string>
using namespace std;
int main() {
    string j, result;
    int k = 0;
    scanf("%s", j);
    for (int i = 0; j[i] != '\0'; i++) {
        if (j[i] == '2') {
            result[k++] = '2';  
        }
    }
    // result[j] = '\0';  
    printf("%s", result);
}
