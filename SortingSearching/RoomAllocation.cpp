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
    ar<int,3> a[n];

    for(int i=0; i<n; i++){
        cin >> a[i][1] >> a[i][0];
        a[i][2]=i;
    }
    sort(a,a+n);

    set<ar<int,2>> s;
    int ans[n];
    for(int i=0; i<n; i++){
        auto it=s.lower_bound({a[i][1]});
        if(it!=s.begin()){
            --it;
            ans[a[i][2]]=(*it)[1];
            s.erase(it);
        } else
            ans[a[i][2]]=s.size();
        s.insert({a[i][0],ans[a[i][2]]});
    }

    cout << s.size() << endl;
    for(int i=0; i<n; i++)
        cout << ans[i]+1 << " ";

    return 0;
}
