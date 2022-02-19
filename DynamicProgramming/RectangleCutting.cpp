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

    int a,b;
    cin >> a >> b;
    ll ans=0;
    while(a!=b){
        ans++;
        if(a<b)
            b=b-a;
        else
            a=a-b;
    }

    cout << ans << endl;
}
