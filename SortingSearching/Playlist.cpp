//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
 
#ifdef LOCAL
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
 
    int ans=0;
    map<ll,int> seq;
    for(int i=0, j=0; i<n&&j<n; i++){
        while(j<n&&(seq.find(k[j])==seq.end()||seq[k[j]]<i)){
            seq[k[j]]=j;
            j++;
        }
        ans = max(j-i,ans);
        if(j<n){
            i=seq[k[j]];
            seq[k[j]]=j;
            j++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
 