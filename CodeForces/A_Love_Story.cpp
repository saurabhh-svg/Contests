#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    string s = "codeforces";
    string t;
    int c = 0;
    cin >> t;
    for (int i = 0; i < t.size();i++){
        if(s[i]!=t[i])
            c++;
    }
    cout << c << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }