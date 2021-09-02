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

    int n;
    cin >> n;
    map<int,int> arr;
    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        arr[val]++;
    }

    cout << arr.size() << endl; 

    return 0;
}
 