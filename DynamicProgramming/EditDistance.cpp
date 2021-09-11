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

    string n, m;
    cin >> n >> m;

    int n_len = n.length();
    int m_len = m.length();
    
    int dp[n_len+1][m_len+1];
    for(int i=0; i<=n_len; i++)
        dp[i][0]=i;
    for(int i=0; i<=m_len; i++)
        dp[0][i]=i;

    for(int i=1; i<=n_len; i++){
        for(int j=1; j<=m_len; j++){
            int c=n[i-1]==m[j-1]?0:1;
            dp[i][j] = min(min(dp[i][j-1],dp[i-1][j])+1,dp[i-1][j-1]+c);
        }
    }
    // for(int i=0; i<=n_len; i++){
    //     for(int j=0; j<=m_len; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n_len][m_len] << endl;
}
