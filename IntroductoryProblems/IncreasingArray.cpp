//g++  7.4.0
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int solve(){

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    ll ans=0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            ans+= arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << ans;
    return 0;
}
