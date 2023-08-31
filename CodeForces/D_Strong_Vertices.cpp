#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, m, i, j, k, mx = LONG_MIN;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >>b[i];
    vector<pair<int,int>> ans;

    for (int i = 0; i < n; i++) {
        ans.push_back({a[i] - b[i], i + 1});
        mx = max(mx, a[i] - b[i]);
    }
    vector<int> cnt;
    for (int i = 0; i < n; i++){
        if (ans[i].first == mx)
            cnt.push_back(ans[i].second);
    }
    cout << cnt.size() << endl;
    for (auto it : cnt) cout << it << " ";
    cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }