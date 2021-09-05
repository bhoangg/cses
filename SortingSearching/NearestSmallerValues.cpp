//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL1
fstream input("test_input.txt");
#define cin input
#endif

#define endl "\n"
#define ll long long
#define ar array

void solve(int n){
 
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int x[n+1]={0,};

    for(int i=1; i<=n; i++){
        cin >> x[i];           
    }

    int dp[n+1]={0,};
    for(int i=2; i<=n; i++){
        int j = i-1;
        while(j>0&&x[j]>=x[i]){
            j=dp[j];
        }
        if(x[i]>x[j])
            dp[i]=j;
        else
            dp[i]=0;
    }
    for(int i=1; i<=n; i++)
        cout << dp[i] << " ";

    return 0;
}
