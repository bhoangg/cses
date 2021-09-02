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

    int n, m , k;
    cin >> n >> m >> k;
    vector<int> appl(n,0);
    vector<int> sz(m,0);

    for(int i=0; i<n; i++){
        cin >> appl[i];
    }
    for(int i=0; i<m; i++){
        cin >> sz[i];
    }

    sort(appl.begin(), appl.end());
    sort(sz.begin(), sz.end());

    int ans=0;
    int i=0, j=0;
    while(i<n && j<m){
        if(sz[j]-k<=appl[i] && sz[j]+k>=appl[i]){
            ans++;
            i++;
            j++;
        } else if(sz[j]-k>=appl[i]){
            i++;
        } else if(sz[j]+k<=appl[i]){
            j++;
        } else {}
    }
    cout << ans << endl;

    return 0;
}
 