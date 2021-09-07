//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ar array

void solve(){

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x;
    cin >> n >> x;

    int coins[n];
    for(int i=0; i<n; i++)
        cin >> coins[i];
    
    ll mod=1e9+7;
    ll count[x+1]={0,};
    count[0]=1;
    for(auto c:coins)
    for(int i=1; i<=x; i++){
        if(i-c>=0){
            count[i]+=count[i-c];
            count[i]%=mod;
        }
    }
    cout << count[x] << endl;
}
