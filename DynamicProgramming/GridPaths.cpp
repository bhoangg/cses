//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ar array

void solve(){

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> grid(n);
    for(int i=0; i<n; i++){
        string line;
        cin >> grid[i];
    }

    ll mod=1e9+7;
    ll dp[n][n];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i)
                dp[i][j]+=dp[i-1][j];
            if(j)
                dp[i][j]+=dp[i][j-1];
            dp[i][j]%=mod;
            if(grid[i][j]=='*')
                dp[i][j]=0;
        }
    }

    cout << dp[n-1][n-1] << endl;
}
