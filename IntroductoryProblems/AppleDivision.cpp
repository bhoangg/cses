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

    int n;
    cin >> n;
    vector<int> p(n,0);
    ll s=0;
    for(int i=0; i<n; i++){
        cin >> p[i];
        s+=p[i];
    }

    ll ans=0;
    for(int i=0; i<1<<n; i++){
        // cout << "i: " << i << endl;
        ll cs=0;
        for(int j=0; j<n; j++){
            // cout << (i>>j&1) << " ";
            if(i>>j&1)
                cs+=p[j];

        }
        if(cs<=s/2){
            ans = max(ans,cs);
        }
        // cout << endl;
    }
    cout << s-2*ans << endl;

    return 0;
}
