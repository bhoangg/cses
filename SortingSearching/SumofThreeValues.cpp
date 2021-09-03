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
    tuple<int, int, int> ans;
    vector<int> a(n,0);
 
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<n; i++){
        int target = x - a[i];
        // sum of 2
        map<int, int> sum2;
        for(int j=i+1; j<n; j++){
            int c = target - a[j];
            if(sum2.find(c)==sum2.end()){
                sum2[a[j]]=j;
            } else {
                cout << i+1 << " " << j+1 << " " << sum2[c]+1 << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
 