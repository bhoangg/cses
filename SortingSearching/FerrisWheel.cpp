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

    vector<int> weight(n,0);
    for(int i=0; i<n; i++)
        cin >> weight[i];

    sort(weight.begin(), weight.end());

    int i=0, j=n-1;
    int ans=0;
    while (i<=j){
        if(weight[i]+weight[j] > x){
            j--;
        } else {
            // i == j or weight[i]+weight[j]<=x
            j--;
            i++;
        }
        ans++;
    } 

    cout << ans << endl;

    return 0;
}
 