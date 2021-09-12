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
    int a[n];
    int x;

    for(int i=0; i<n; i++){
        cin >> a[i];
        x+=a[i];
    }

    int dp[x+1]={0,};
    dp[0]=1;
    
    for(int i=0; i<n; i++){
        for(int j=x; j; j--){
            if((j-a[i])>=0)
                dp[j] |= dp[j-a[i]];
        }
    }
    vector<int> ans;
    for(int i=1; i<=x; i++){
        if(dp[i])
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
}
