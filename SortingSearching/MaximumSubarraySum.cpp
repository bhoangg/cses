//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

#ifdef LOCAL1
fstream input("test_input.txt");
#define cin input
#endif


void solve(int n){

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n ;
    vector<ll> arr(n,0);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];  
    }

    vector<ll> dp(n,0);
    dp[0]=arr[0];
    ll maxSub = dp[0];
    for(int i=1; i<n; i++){
        if(dp[i-1]+arr[i]>arr[i]){
            dp[i]=dp[i-1]+arr[i];
        }
        else
        {
            dp[i]=arr[i];
        }
        maxSub = max(maxSub, dp[i]);
    }

    cout << maxSub << endl;

    return 0;
}
 