//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ar array

ll mod=1e9+7;

void solve(){

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ll s=(n+1)*n/2;

    if(s%2){
        cout << 0 << endl;
    } else {
        ll x=s/2;
        ll dp[x]={0,};
        dp[1]=1;
        for(int i=2; i<=n; i++){
            for(int j=x-1; j>1; j--){
                dp[j]+=dp[j-x]%mod;
            }
        }
        cout << dp[x-1] << endl;
    }

}
