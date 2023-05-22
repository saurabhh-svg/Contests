#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n,odd=0,even=0,mn=INT_MAX;
cin >> n;
vector<int> v(n);

for (int i = 0; i < n;i++){
    cin >> v[i];
    if(v[i]&1) odd++;
    else even++;
    mn = min(mn, v[i]);
}

if(mn&1 || even==0 || odd==0)
    cout << "YES\n";
else
    cout << "NO\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }