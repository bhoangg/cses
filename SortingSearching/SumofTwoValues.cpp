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

    int n,x;
    cin >> n >> x;
    vector<int> arr(n,0);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];  
    }

    map<int,int> s;
    for(int i=0; i<n; i++){
        int val = x - arr[i];
        if(s.find(val)!=s.end()){
            cout << i+1 << " " << s[val]+1 << endl;
            return 0;
        } else {
            s[arr[i]]=i;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
 