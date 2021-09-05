//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ar array

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

    int n,k;
    cin >> n >> k;
    ar<int,3> a[n];

    for(int i=0; i<n; i++){
        cin >> a[i][1] >> a[i][0];
        a[i][2]=i;
    }
    sort(a,a+n);

    set<ar<int,2>> s;
    int ans[n]={0,};
    int ans2=0;
    for(int i=0; i<n; i++){
        auto it=s.lower_bound({a[i][1]+1});
        if(it!=s.begin()){
            --it;
            ans[a[i][2]]=(*it)[1];
            s.erase(it);
        } else{
            ans[a[i][2]]=s.size();
        }
        if(s.size()<k){
            s.insert({a[i][0],ans[a[i][2]]});
            ans2++;
        }
    }

    cout << ans2 << endl;

    return 0;
}
