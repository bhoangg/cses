//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll unsigned long long

void solve(){

}

ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x % p;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=0;
    cin >> n;
    string b = to_string(n);

    ll remainderB = 0;
    ll MOD = 1000000007;
 
    // Reduce the number B to a small number
    // using Fermat Little
    for (int i = 0; i < b.length(); i++)
        remainderB = (remainderB * 10 +
                       b[i] - '0') % (MOD - 1);
 
    cout << power(2, remainderB, MOD) << endl;
    return 0;   
}
