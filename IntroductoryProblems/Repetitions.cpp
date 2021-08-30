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

    string ADN;
    cin >> ADN;

    int max_length=1;
    int tmp=1;
    for(int i=0; i<ADN.length()-1; i++){
        if(ADN[i]==ADN[i+1]){
            tmp++;
        }
        else{
            tmp=1;
        }
        max_length = max(tmp,max_length);

    }
    cout << max_length;
    return 0;
}
