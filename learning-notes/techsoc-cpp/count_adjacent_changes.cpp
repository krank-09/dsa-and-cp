// Count positions where the next character differs.

#include<iostream>
#include<string>
using namespace std;
int main(){
    int num; cin>>num; cin.ignore();
    string s; getline(cin,s); 
    int count =0; 
    for(int i = 0 ; i < num ; i++){
        if(s[i] != s[i+1])
            count++ ;
    }
    cout<<count;
}