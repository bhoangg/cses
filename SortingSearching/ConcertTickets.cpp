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

    int n, m;
    cin >> n >> m;

    set<int> h;
    map<int,int> purchased;
    vector<int> t(m,0);
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        h.insert(tmp);
        purchased[tmp]++;
    }
    for(int i=0; i<m; i++)
        cin >> t[i];

    vector<int> ans(m,-1);
    
    for(int i=0; i<m; i++){
        auto it = h.upper_bound(t[i]);
        if(it==h.begin())
            continue;
        else
            it--;

        if(*it>=*h.begin()){
            ans[i]=*it;
            purchased[*it]--;
            if(purchased[*it]==0)
                h.erase(*it);
        }
    }

    for(int i=0; i<m; i++)
        cout << ans[i] << endl;

    return 0;
}
 