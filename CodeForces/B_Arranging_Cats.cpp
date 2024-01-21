#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,count=0,zero=0,one=0;
    cin >> n;
    string s, f;
    cin >> s >> f;

    for (int i = 0; i < n;i++){
        if(s[i]!=f[i]){
            if(s[i]=='1')  one++;
            else zero++;
        }
    }
    count = max(one, zero);
    cout << count << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }