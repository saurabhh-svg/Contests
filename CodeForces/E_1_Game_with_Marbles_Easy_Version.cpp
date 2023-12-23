#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, ans = 0, count = 0; cin >> n;
    vector<int> a(n), b(n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)  cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) v[i] = {a[i] + b[i], i};
    sort(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)  {
        if (!(count & 1))  ans += a[v[i].second] - 1;
        else  ans -= b[v[i].second] - 1;
        count++;
    }
    cout << ans <<endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }
