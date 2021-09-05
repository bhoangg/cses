//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL1
fstream input("test_input.txt");
#define cin input
#endif

#define endl "\n"
#define ll long long
#define ar array

void solve(int n){
 
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int x,n;
    cin >> x >>  n;
    int p[n]={0,};
    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    int lo=0, hi=x;
    set<int> l;
    map<int,int> dis;
    l.insert(lo);
    l.insert(hi);
    dis[hi-lo]++;

    for(int i=0; i<n; i++){
        auto it = l.upper_bound(p[i]);
        hi=*it;
        it--;
        lo=*it;
        dis[hi-lo]--;
        if(!dis[hi-lo])
            dis.erase(hi-lo);
        l.insert(p[i]);
        dis[hi-p[i]]++;
        dis[p[i]-lo]++;
        cout << (--dis.end())->first << " ";
    }

    return 0;
}
