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

    int n,x;
    cin >> n >> x;
    int coins[n];
    for(int i=0; i<n; i++){
        cin >> coins[i];
    }
    ll count[x+1];
    count[0]=0;   
    for(int i=1; i<=x; i++){
        count[i]=1e18;
        for(auto c:coins ){
            // cout << d << " ";
            if(i-c>=0){
                count[i]=min(count[i],count[i-c]+1);
            }
        }
    }
    if(count[x]==1e18)
        count[x]=-1;
    cout << count[x] << " ";
    return 0;
}
 