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
 
    int n, t;
    cin >> n >> t;
    vector<int> k(n,0);
 
    for(int i=0; i<n; i++){
        cin >> k[i];
    }
    int ans=0;
    vector<int> m(n,0), task(n,0);
    int done=0;
    while(1){
        if(done==n)
            break;
        for(int i=0; i<n; i++){
            if(m[i]==0&&t!=0){
                m[i]=k[i];
                task[i]++;
                t--;    
            }
            else if(m[i]!=0){
                m[i]--;
            } else {
                done++;
            }
        }
        ans++;
    }
    // for(int i=0; i<n; i++)
    //     cout << task[i] << " ";
    // cout << endl;
    cout << ans << endl;

    return 0;
}
 