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

void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2);
 
    /* step 2 */
    cout << n % 2;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector <int> ans;
    for(int i =0; i<1<<n; i++){
        ans.push_back(i^(i>>1));
    }
    for(int i=0; i<ans.size(); i++){
        int tmp =n;
        while(--tmp)
            if(ans[i]< pow(2,tmp))
                cout << "0";
        bin(ans[i]);
        cout << endl;
    }
        

    return 0;
}
 