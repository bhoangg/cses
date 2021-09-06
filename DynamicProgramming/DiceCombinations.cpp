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

    int n;
    cin >> n;
    int dice [6] = {1,2,3,4,5,6};
    ll count[n+1]={0,};
    ll mod = 1e9+7;

    count[0]=1;    
    for(int i=1; i<=n; i++){
        for(auto d:dice ){
            // cout << d << " ";
            if(i-d>=0){
                count[i]+=count[i-d];
                count[i]%=mod;
            }
        }
    }
    cout << count[n] << " ";
    return 0;
}
 