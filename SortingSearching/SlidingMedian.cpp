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
    ll x[n];

    for(int i=0; i<n; i++){
        cin >> x[i]; 
    }
    ll sum=0;
    for(int i=0; i<k; i++)
        sum+=x[i];
    cout << sum/k  << " ";
    for(int i=1; i<=n-k; i++){
        sum-=x[i-1];
        sum+=x[i-1+k];
        double u = (double)sum/k;
        cout << round(u) << " ";
    }

    return 0;
}
