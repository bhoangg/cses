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
    ar<int,3> a[n];

    for(int i=0; i<n; i++){
        cin >> a[i][1] >> a[i][0] >> a[i][2];
    }

    sort(a,a+n);
    set<ar<ll,2>> dp;
    dp.insert({0,0});
    ll ans=0;
    for(int i=0; i<n; i++){
        auto it = dp.lower_bound({a[i][1]});
            --it;
            ans = max(ans,(*it)[1]+a[i][2]);
            dp.insert({a[i][0],ans});
    }

    cout << ans << endl;

}
