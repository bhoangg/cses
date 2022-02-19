//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

const int mxN  = 1e5;
vector<int> adj[mxN], ans;
int visited[mxN];
int n, m;

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

    for(int i=0; i<n; i++)
        visited[i]=-1;

    queue<int> q;
    q.push(0);
    visited[0]=-2;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(visited[v]<0){
                visited[v]=u;
                q.push(v);
            }
        }
    }
    // for(int i=0; i<4*n; i++)
    //     cout << visited[i] << " ";
    // cout << endl;
    if(visited[n-1]==-1){
        cout << "IMPOSSIBLE";
    } else {
        int u = n-1;
        while(u){
            ans.push_back(u);
            u=visited[u];
        }
        ans.push_back(0);
        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i]+1 << " ";
        }

    }

    return 0;
}
