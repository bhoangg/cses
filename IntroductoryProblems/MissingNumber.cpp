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

    int n=0;
    cin >> n;
    set<int> arr;
    while(n>1){
        int temp;
        cin >> temp;
        arr.insert(temp);
        n--;
    }

    int next = 1;
    for (auto it=arr.begin(); it!=arr.end(); it++){
        if(next != *it)
        {
            cout << next;
            return 0;
        }
        next++;
    }
    cout << next;
    return 0;
}
