#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n;
cin >> n;
vector<int> v(n);
for (int i = 0; i < n;i++)
    cin >> v[i];

sort(v.begin(), v.end());
    int ans = max(v[0] * v[1], v[n - 2] * v[n - 1]);
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }