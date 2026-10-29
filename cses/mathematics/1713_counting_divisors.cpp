// Counting Divisors (CSES 1713)
// https://cses.fi/problemset/task/1713
// Trial division up to sqrt(x), counting i and x/i.

#include<iostream>
using namespace std;
long long countDiv(long long num){
    int count = 0;
    if(num == 0 || num == 1) return 1; 
    for (long long i = 1; i * i <= num; i++){
        if (num % i == 0){
            count++; 
            if (i != num / i) {
                count++; 
            }
        }
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    while (n--){
        long long a;
        cin >> a;
        int ans = countDiv(a);
        cout<<ans<<"\n";
    }
}