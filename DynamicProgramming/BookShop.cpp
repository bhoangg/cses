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

    int n,x;
    cin >> n >> x;
    ar<int,2> a[n];

    for(int i=0; i<n; i++)
        cin >> a[i][0];
    for(int i=0; i<n; i++)
        cin >> a[i][1];

    ll dp[x+1]={0,};
    dp[0]=0;

    for(int i=0; i<n; i++){
        for(int j=x; j>0; j--){
            if((j-a[i][0])>=0)
                dp[j] = max(dp[j],dp[j-a[i][0]]+a[i][1]);
        }
    }
    cout << dp[x] << endl;
}
