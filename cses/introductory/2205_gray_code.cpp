// Gray Code (CSES 2205)
// https://cses.fi/problemset/task/2205
// Reflect the list of (n - 1)-bit codes and prefix 0s and 1s.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    
    vector<string> codegray = {"0", "1"};

    for (int i = 2; i <= n; i++) 
    {
        int currsize = codegray.size();
        for (int j = currsize - 1; j >= 0; j--) {
            codegray.push_back(codegray[j]);
        }
        for (int j = 0; j < currsize; j++) {
            codegray[j] = "0" + codegray[j];
            codegray[j + currsize] = "1" + codegray[j + currsize];
        }
    }

    for(const string &s : codegray) {
        cout << s << "\n";
    }
    return 0;
}