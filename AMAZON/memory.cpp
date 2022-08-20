#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve()
{
    int n, m;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cin >> m;
    vector<int> sum(n + 1, 0);
    sum[0] = 0;
    for (int i = 0; i < n; i++)    sum[i + 1] = sum[i] + v[i];

    int mx = INT_MIN;
    for (int i = m; i <= n; i++){
        int temp = sum[i] - sum[i - m];
        mx = max(temp, mx);
    }
    int ans = sum[n] - mx;
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}