//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

#ifdef LOCAL1
fstream input("test_input.txt");
#define cin input
#endif
vector<ll> arr;
map<int,int> query;

void solve(int n){
    int  a,b;
    cin >> a >> b;
    a--;b--;

    //swap operation
    int x, y;
    x=arr[a];
    y=arr[b];
    query[x]=b;
    query[y]=a;
    arr[a]=y;
    arr[b]=x;

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
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >>m;
    arr.assign(n,0);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
        query[arr[i]]=i;
    }

    while(m--){
        solve(n);
    }

    return 0;
}
 