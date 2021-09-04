//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
 
#ifdef LOCAL
fstream input("test_input.txt");
#define cin input
#endif
 
 
void solve(int n){
 
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x;
    cin >> n >> x;
    int a[n];
    unordered_map<int, array<int,2>> mp; 
 
    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }
    mp.reserve(n*(n-1)/2);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(mp.find(x-a[i]-a[j])!=mp.end())
            {
                array<int,2> p = mp[x-a[i]-a[j]];
                cout << i+1 << " " << j+1 << " " << p[0]+1 << " " << p[1]+1 << endl;
                return 0;
            }
        }
        for(int j=0; j<i; j++)
            mp[a[i]+a[j]] = {i,j};
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
 