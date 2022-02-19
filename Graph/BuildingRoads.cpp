//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

const int mxN  = 1e5;
vector<int> adj[mxN], ans;
int visited[mxN];
int n, m;

void dfs(int u){
    visited[u] = 1;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i=0, a, b; i<m; i++){
        cin >> a >> b;
        --a, --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i);
            ans.push_back(i);
        }
    }

    cout << ans.size()-1 << endl;
    for(int i=1; i<ans.size(); i++)
        cout << ans[0]+1 << " " << ans[i] + 1 << endl;

    return 0;
}
