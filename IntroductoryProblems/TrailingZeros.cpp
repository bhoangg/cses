//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void solve(){

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=0;
    cin >> n;

    ll ans = 0;
    // https://en.wikipedia.org/wiki/Trailing_zero
    for (ll i=5; i<=n; i*=5){
        ans+=n/i;
        // cout << i << " ";    
    }

    cout << ans << endl;
    return 0;
}
 