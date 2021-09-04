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
 
    int n, x;
    cin >> n >> x;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    ll ans=0;
    ll s=0;
    map<ll,int> mp;
    mp[0]++;
    for(int i=0; i<n; i++){
        s+=a[i];
        ans+=mp[s-x];
        mp[s]++;
    }
    cout << ans << endl;

    return 0;
}
