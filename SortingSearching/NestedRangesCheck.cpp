//g++  (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ar array

#ifdef LOCAL1
fstream input("test_input.txt");
#define cin input
#endif

bool comp(ar<ll,3> a, ar<ll,3>b){
    if(a[0]==b[0])
        return a[1]>b[1];
    return a[0]<b[0];
}
void solve(int n){

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ar<ll,3> a[n];
    
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        a[i]={x,y,i};
    }
    sort(a,a+n,comp);
    
    int a1[n]={0,}, a2[n]={0,};

    ll maxEnd=0;
    for(int i=0; i<n; i++){
        if(a[i][1]<=maxEnd)
            a2[a[i][2]]=1;
        maxEnd=max(maxEnd, a[i][1]);
    }

    ll minEnd=1e18;
    for(int i=n-1; i>=0; i--){
        if(a[i][1]>=minEnd)
            a1[a[i][2]]=1;
        minEnd=min(minEnd,a[i][1]);
    }

    for(int i=0; i<n; i++)
        cout << a1[i] << " ";
    cout << endl;
    for(int i=0; i<n; i++)
        cout << a2[i] << " ";
    cout << endl;


    return 0;
}
 