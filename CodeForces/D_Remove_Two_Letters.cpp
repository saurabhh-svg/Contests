#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n,ans=0;
string s;
cin >> n >> s;
for (int i = 0; i <= n - 2;i++){
    if(s[i]==s[i+2]) ans++;
}
cout << n-1-ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }