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
    cin >> n ;
    vector<ll> arr(n,0);
    map<int,int> query;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
        query[arr[i]]=i;
    }
    int ans=1;
    int idx=query[1];
    for(int i=1; i<=n; i++){
        if(query[i]<idx)
        {
            ans++;
            idx=query[i];
        } else{
            idx=query[i];
        }
    }

    cout << ans << endl;

    return 0;
}
 