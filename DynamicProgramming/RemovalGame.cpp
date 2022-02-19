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
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());
    
    ll ans=0;
    for(int i=0; i<n; i++){
        if(i%2==0)
            ans+=a[i];
    }

    cout << ans << endl;
}
