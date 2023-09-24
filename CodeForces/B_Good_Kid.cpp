#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,ans=1; cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    v[0]++;
    for (auto i : v)
        ans *= i;
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }