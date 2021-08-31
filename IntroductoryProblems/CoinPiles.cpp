//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

#ifdef LOCAL
fstream input("test_input.txt");
ofstream output("output.txt");
#define cin input
#define cout output
#endif

void solve(){
    int a,b;

    cin >> a >> b;

    string ans = (((a+b)%3==0)&&2*a>=b&&2*b>=a)? "YES" : "NO";
    cout << ans << endl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=0;
    cin >> n;

    while(n--)
        solve();
    return 0;

#ifdef LOCAL
    cin.close();
    cout.close();
#endif
}
 