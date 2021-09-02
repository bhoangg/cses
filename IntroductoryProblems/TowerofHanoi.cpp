//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

#ifdef LOCAL1
fstream input("test_input.txt");
ofstream output("output.txt");
#define cin input
#define cout output
#endif

vector<pair<int, int>> trace;

int backtrack(int st, int dst, int mid,  int n){
    int ans=0;
    if(n==0)
        return 0;
    
    //1. move n-1 dish from st to mid
    ans+= backtrack(st, mid, dst, n-1);
    //2. move 1 dish from st to dst
    ans +=1;
    trace.push_back({st,dst});
    //3. move n-1 dish from mid to dst
    ans+= backtrack(mid, dst, st, n-1);

    return ans;
}

void solve(int n){

    int ans = backtrack(1, 3, 2, n);
    
    cout << ans << endl;
    for(auto it:trace){
        cout << it.first << " " << it.second << endl;
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
 