//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void solve(ll n){
    ll sum = (n+1)*n/2;
    if(sum%2){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        ll half = sum/2;
        ll sub=0;
        set<int> sub1, sub2;
        for(ll i=n; i>=1; i--){
            if(sub+i>half){
                sub2.insert(i);;
            } else {
                sub+=i;
                sub1.insert(i);
            }
        }
        cout << sub1.size() << endl;
        for(auto it = sub1.begin(); it!= sub1.end(); it++)
            cout << *it << " ";
        cout << endl;
        cout << sub2.size() << endl;
        for(auto it = sub2.begin(); it!= sub2.end(); it++)
            cout << *it << " ";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    solve(n);

    return 0;
}
