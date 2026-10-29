// Madamant's Skating Dynasty (Codeforces 2264C)
// https://codeforces.com/problemset/problem/2264/C

#include<iostream>
#include<vector>
#include<algorithm>
const long long MOD = 998244353;
using namespace std;

long long power(long long b, long long e, long long m){
    long long r=1; b%=m;
    while(e>0){ if(e&1) r=r*b%m; b=b*b%m; e>>=1; }
    return r;
}

long long inv(long long x){ return power(x,MOD-2,MOD); }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int tc ; 
    cin >> tc ;
    while(tc--){
        int n; cin >> n;
        vector<long long> a(n);
        for(auto& x : a) cin >> x;
        if(n==1){ cout<<0<<"\n"; continue; }

        sort(a.begin(), a.end());

        long long T=1;
        for(int i=1;i<=n-1;i++) T=T*i%MOD;

        vector<long long> suffSum(n,0);
        for(int i=n-2;i>=0;i--)
            suffSum[i]=(suffSum[i+1]+a[i+1]%MOD)%MOD;

        long long ans=0;
        for(int i=0;i<n-1;i++){
            long long hi=n-1-i;
            long long Tdivhi=T*inv(hi)%MOD;
            ans=(ans+Tdivhi*suffSum[i])%MOD;
            ans=(ans-T%(MOD)*( a[i]%MOD)%MOD+MOD)%MOD;
        }
        cout<<ans<<"\n";
    }
}


