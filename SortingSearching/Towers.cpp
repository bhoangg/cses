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
    cin >> n;
    vector<ll> k(n,0);
 
    for(int i=0; i<n; i++){
        cin >> k[i];
    }

    int ans=1;
    multiset<int> top;
    top.insert(k[0]);
    
    for(int i=1; i<n; i++){
        auto low = top.lower_bound(k[i]);
        auto up = top.upper_bound(k[i]);
        if(up==top.end()){
            ans++;
            top.insert(k[i]);
        } else{
            top.erase(up);
            top.insert(k[i]);
        }
    }

    cout << ans << endl;
 
    return 0;
}
 