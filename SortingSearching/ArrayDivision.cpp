//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define ar array
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
 
    int n,k;
    cin >> n >> k;
    int x[n];

    for(int i=0; i<n; i++){
        cin >> x[i]; 
    }

    ll ans=n;
    ll lo=*max_element(x,x+n), hi=1e18;
    while(lo<=hi){
        ll mid = (lo+hi)/2;
        ll ls=0;
        int c=1;
        for(int i=0; i<n; i++){
            if(ls+x[i]>mid){
                ls=0;
                c++;
            }
            ls+=x[i];
        }
        if(c>k){
            lo=mid+1;
        } else
            hi=mid-1;
    }

    cout << lo << endl;

    return 0;
}
