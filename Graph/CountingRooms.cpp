//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int r[] = {-1, 1, 0, 0};
int c[] = {0, 0, -1, 1};

int solve(){

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans=0;
    int n, m;
    cin >> n >> m;

    vector<char> mp;

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            char c;
            cin >> c;
            mp.push_back(c);
            // cout << c;
        }
        // cout << endl;
    }

    int  visited[n*m] = {};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mp[i*m+j]=='.'){
                // bfs
                queue<vector<int>> q;
                q.push({i,j});
                while(!q.empty()){
                    vector<int> pos = q.front();
                    q.pop();
                    mp[pos[0]*m+pos[1]] = '#';
                    for(int k=0; k<4; k++){
                        int row = pos[0]+r[k];
                        int col = pos[1]+c[k];
                        if(row>=0 && row<n && col>=0 && col<m && visited[row*m + col]==0){
                            if(mp[row*m + col] == '.'){
                                visited[row*m + col] = 1;
                                q.push({row,col});
                            }
                        }
                    }
                }
                ans++;
            }
        }
        
    }
    
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         cout << mp[i*m+j];
    //     }
    //     cout << endl;
    // }
    cout << ans << endl;
    return 0;
}
