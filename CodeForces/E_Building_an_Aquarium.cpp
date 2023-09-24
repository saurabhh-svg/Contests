#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isOk(vector<int> &v, int mid, int x){
    int count = 0;
    for (auto i : v) count += max(0ll, mid - i);
    
    return x >= count;
}

void solve(){
    int n, x, ans = 0, lo = 1, hi = 0;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    hi = 1e10;
    while (lo <= hi) {
        int mid = (hi + lo) / 2;
        if (isOk(v, mid, x)) {
            ans = mid;
            lo = mid + 1;
        } else hi = mid - 1;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}