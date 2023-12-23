#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k,ans=0,ans2=0,mx=0;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    for (int i = 0; i < n; ++i) {    
        if (k == i) break;
        ans += a[i], mx = max(mx, b[i]);
        ans2 = max(ans + (k - i - 1) * mx, ans2);
    }
    cout << ans2 << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }