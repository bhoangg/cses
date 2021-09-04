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

bool comp(ar<int,2> a, ar<int,2>b){
    return a[0]<b[0];
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    set<ar<int,2>> s;

    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        s.insert({2*a,1});
        s.insert({2*b+1,-1});
    }
    int ans=0;
    int c=0;
    for(auto a:s){
        c+=a[1];
        ans=max(ans,c);
    }

    cout << ans << endl;

    return 0;
}
