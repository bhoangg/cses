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

    int n, a, b;
    cin >> n >> a >> b;
    vector<ll> c(n+1,0);
    
    for(int i=0; i<n; i++){
        cin >> c[i+1];
        c[i+1]+=c[i];  
    }

    ll sum=-1e18;
    set<ar<ll,2>> s;
    for(int i=0; i<=n; i++){
        if(i>=a){
            s.insert({c[i-a],i-a});
        }
        if(s.size()){
            sum=max(sum,c[i]-(*s.begin())[0]);
        }
        if(i>=b){
            s.erase({c[i-b],i-b});
        }
    }
    cout << sum << endl;

    return 0;
}
 