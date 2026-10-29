// Palindrome Reorder (CSES 1755)
// https://cses.fi/problemset/task/1755
// Count letters; at most one odd count. Build half + middle + reversed half.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s ; cin >> s ;
    vector<int>count(26, 0);
    for(char c : s) count[c-'A']++;

    int odd_count = 0 ;
    int odd_index = -1 ;
    for (int i = 0 ; i < 26 ; i++){
        if(count[i] % 2 != 0){
            odd_count++ ;
            odd_index = i ;
        }
    }
    if(odd_count > 1){
        cout << "NO SOLUTION\n" ;
        return 0 ;
    }

    string first_half = "" ;
    string middle = "" ;
    for (int i = 0 ; i < 26 ; i++){
        if(i == odd_index)
            middle = string(count[i], 'A' + i) ;
        else 
            first_half += string(count[i]/2, 'A' + i) ;
    }
    string second_half = first_half ;
    reverse(second_half.begin(), second_half.end()) ;
    cout << first_half + middle + second_half << "\n" ;
}