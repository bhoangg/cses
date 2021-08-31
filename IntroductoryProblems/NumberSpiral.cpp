//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int solve(){
    ll x,y;
    cin >> x >> y;

    ll p=x>y?x:y;
    ll s=p*p;
    ll mid = s-p+1;
    if(p%2){
        if(x<p)
            cout << mid + (p-x) << endl;
        else if(y<p)
            cout << mid - (p-y) << endl;
        else
            cout << mid << endl;

    } else {
        if(x<p)
            cout << mid - (p-x) << endl;
        else if(y<p)
            cout << mid + (p-y) << endl;
        else
            cout << mid << endl;
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--){
        solve();
    }

    return 0;
}
