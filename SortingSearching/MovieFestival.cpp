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

bool comp(pair<int, int> a, pair<int,int>b){
    return a.second<b.second;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> movies(n,{0,0});
    for(int i=0; i<n; i++){
        int start, end;
        cin >> start >> end;
        movies[i] = {start, end};
    }

    sort(movies.begin(), movies.end(), comp);
    // for(int i=0; i<n; i++)
    //     cout << movies[i].first << " " << movies[i].second << endl;

    int ans=1;
    pair<int, int> prev = movies[0];
    for(int i=1; i<n; i++){
        if(movies[i].first>=prev.second){
            ans++;
            prev = movies[i];
        }
    }

    cout << ans << endl;

    return 0;
}
 