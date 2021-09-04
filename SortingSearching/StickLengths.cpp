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

const int mxN=2e5;
int p[mxN];

void solve(int n){
 
}

bool comp(ar<int,2> a, ar<int,2>b){
    return a[0]<b[0];
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    sort(p,p+n);
    ll ans=0;
    ll x=p[n/2];
    for(int i=0; i<n; i++){
        ans+=abs(x-p[i]);
    }

    cout << ans << endl;

    return 0;
}
