//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int solve(){

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t=0;
    cin >> t;
    cout << t << " ";

    while (t!=1){
        if(t%2)
            t = t*3+1;
        else
            t = t/2;
        cout << t << " ";
    }
}
