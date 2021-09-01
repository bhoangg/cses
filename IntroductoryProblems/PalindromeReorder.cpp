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
 
    string n;
    cin >> n;
    int len = n.length();
 
    vector<int> s(26,0); 
    for(int i=0; i<len; i++){
        s[n[i]-'A']++;
    }
 
    // n.clear();
 
    int mid=-1;
    int idx=0;
    for (int i=0; i<26; i++){
        // cout << s[i] << " ";
        if(s[i]%2==1){
            if(mid!=-1 || len%2==0){
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            mid=i;
            n[len/2]='A'+i;
            s[i]--;
        }
        while(s[i]!=0){
            s[i]-=2;
            n[idx]='A'+i;
            n[len-1-idx]= 'A'+i;
            idx++;
        }
    }
 
    cout << n << endl;
 
    return 0;
}