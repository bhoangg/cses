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
 
    int n, t;
    cin >> n >> t;
    vector<int> k(n,0);
 
    for(int i=0; i<n; i++){
        cin >> k[i];
    }
    ll lo=1, hi=1e18;
    ll ans=0;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        ll sum=0;
        for(int i=0; i<n; i++){
            sum += min(mid/k[i],(ll)1e9);
        }
        if(sum>=t)
        {
            ans=mid;
            hi=mid-1;
        } else {
            lo=mid+1;
        }
    }
    cout << ans << endl;

    return 0;
}
 