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

bool comp(pair<int, int> a, pair<int,int> b){
    return a.first < b.first;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector<pair<int,int>> task(n,{0,0});
 
    for(int i=0; i<n; i++){
        int a, d;
        cin >> a >> d;
        task[i] = {a,d};
    }
    sort(task.begin(), task.end(), comp);

    ll ans=0;
    ll time=0;
    for(int i=0; i<n; i++){
        time += task[i].first;
        ans += task[i].second - time;
    }
    cout << ans << endl;

    return 0;
}
 