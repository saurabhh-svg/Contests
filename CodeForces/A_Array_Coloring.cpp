#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n,o=0,e=0;
cin >> n;

for (int i = 0; i < n;i++){
    int x;
    cin >> x;
    if(x&1)
        o++;
    else
        e++;
}
if(o&1) cout << "NO\n";
else cout << "YES\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }