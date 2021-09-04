//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
 
#ifdef LOCAL1
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
    array<int,2> a[n];
 
    for(int i=0; i<n; i++){
        cin >> a[i][0]; 
        a[i][1]=i;
    }
    sort(a, a+n);
    // for(int i=0; i<n; i++){
    //     cout << a[i][0] << " "; 
    //     cout << a[i][1] << endl;
    // }
    
    for(int i=0; i<n-1; i++){
        int target = x - a[i][0];
        // sum of 2
        int f=i+1, l=n-1;
        while(f<l){
            int s=a[f][0]+a[l][0];
            if(s==target){
                cout << a[i][1]+1 << " " <<  a[f][1]+1 << " " << a[l][1]+1 << endl;
                return 0;
            } else if(s<target){
                f++;
            } else
                l--;
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
 