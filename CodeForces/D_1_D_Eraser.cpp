#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n,k,ans=0;
string s;
cin >> n >> k >> s;
for (int i = 0; i < n; i++)
    if (s[i] == 'B') ans++, i += k - 1;
cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }