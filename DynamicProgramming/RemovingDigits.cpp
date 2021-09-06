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

    int n;
    cin >> n;

    int ans=0;
    while(n){
        string num = to_string(n);
        sort(num.begin(), num.end());
        n-=num[num.length()-1]-'0';
        ans++;
    }
    cout << ans << endl;
}
