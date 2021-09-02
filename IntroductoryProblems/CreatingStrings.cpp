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
 
void solve(){
 
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;
    int len = s.length();

    sort(s.begin(), s.end());
    vector<string> ans;

    do{
        ans.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
  
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << endl;
 
    return 0;
}