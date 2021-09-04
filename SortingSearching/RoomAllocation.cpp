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

const int mxN = 2e5;

void solve(int n){

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    set<ar<int,3>> s;

    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        s.insert({2*a,1,i});
        s.insert({2*b+1,-1,i});
    }

    ll ans=0;
    ll cnt=0;
    map<int,int> mp;
    set<int> r;
    int k[n];
    for(auto c:s){
        cnt+=c[1];
        if(c[1]==1){
            // customer in
            if(cnt>ans)
                r.insert(cnt);
            mp[c[2]]=*r.begin();
            r.erase(r.begin());
            k[c[2]]=mp[c[2]];
        } else {
            // customer out
            r.insert(mp[c[2]]);
            mp[c[2]]=0;
        }
        ans = max(cnt,ans);
    }
    cout << ans << endl;
    for(int i=0; i<n; i++)
        cout << k[i] << " ";

    return 0;
}
