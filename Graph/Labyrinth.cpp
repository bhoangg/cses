//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int r[] = {-1, 1, 0, 0};
int c[] = {0, 0, -1, 1};
char di[] = {'D', 'U', 'R', 'L'};

int solve(){

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans=0;
    int n, m;
    pair<int,int> src, dst;
    cin >> n >> m;

    vector<char> mp;

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            char c;
            cin >> c;
            mp.push_back(c);
            if(c == 'A'){
                src = make_pair(i,j);
            } else if (c == 'B'){
                dst = make_pair(i,j);
            } else {}
            // cout << c;
        }
        // cout << endl;
    }

    int v[n*m] = {};
    int d[n*m] = {};

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            d[i*m+j] = INT_MAX;
        }
    }
    d[src.first*m + src.second] = 0;
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         cout << d[i*m+j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // bfs
    queue<vector<int>> q;
    q.push({src.first,src.second});
    while(!q.empty()){
        vector<int> pos = q.front();
        q.pop();
        // mp[pos[0]*m+pos[1]] = '#';
        if(mp[pos[0]*m+pos[1]]=='B') {
            cout << "YES" << endl;
            cout << d[pos[0]*m+pos[1]] << endl;
            
            string path = "";
            int x = dst.first, y = dst.second;
            int l = d[pos[0]*m+pos[1]];
            while(l!=0){
                for(int i=0; i<4; i++){
                    int xx = x+r[i];
                    int yy = y+c[i];
                    if(xx>=0 && xx<n && yy>=0 && yy<m){
                        // cout << d[xx*m+yy] << endl;
                        if(d[xx*m+yy]==l-1){
                            x = xx;
                            y = yy;
                            l--;
                            path += di[i];
                            // cout << path << endl;
                            break;
                        }
                    }
                }
            }
            reverse(path.begin(), path.end());
            cout << path << endl;

            return 0;
        }
        for(int k=0; k<4; k++) {
            int row = pos[0]+r[k];
            int col = pos[1]+c[k];
            if(row>=0 && row<n && col>=0 && col<m && v[row*m + col]==0){

                // } else 
                if(mp[row*m + col] != '#') {
                    v[row*m + col] = 1;
                    if(d[row*m + col]>d[pos[0]*m+pos[1]]+1)
                        d[row*m + col] = d[pos[0]*m+pos[1]]+1;
                    q.push({row,col});
                }
            }
        }
    }
    
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         cout << mp[i*m+j];
    //     }
    //     cout << endl;
    // }
    cout << "NO" << endl;
    return 0;
}
