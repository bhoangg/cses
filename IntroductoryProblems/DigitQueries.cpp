//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll unsigned long long
 
#ifdef LOCAL1
fstream input("test_input.txt");
#define cin input
#endif

void solve(){
    ll k;
    cin >> k;
    //1. find the number contain the needed digit
    ll tmp=0;
    ll i=0;
    while(tmp<k){
        i++;
        tmp+=i*9*(ll)pow(10,i-1);
        // cout << i << " " << tmp << endl;
    }

    if(i==1){
        cout << k << endl;
        return;
    }
    tmp-=i*9*(ll)pow(10,i-1);
    tmp=k-tmp;
    ll num = (ll)pow(10,i-1);
    ll pos;
    // cout << tmp << " " << num << " " << i << endl;
    if(tmp<=i){
        pos=tmp;
    } else if (tmp%i!=0){
        num += tmp/i;
        pos = tmp%i;
    } else {
        num += tmp/i-1;
        pos = i;
    }
    
    string ans=to_string(num);

    // cout << ans << " " << tmp << " " << pos << " " << i << endl;
    cout << ans[pos-1] << endl;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;
    while(q--){
        solve();
    }

    return 0;
}