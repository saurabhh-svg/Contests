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
    int n, c = 0;
    cin >> n;
    vector<int> b(n), g(n);
    int ans = INT_MAX;
    fl(i, n) cin >> b[i];
    fl(i, n) cin >> g[i];
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    sort(g.begin() + n / 2, g.end(), greater<int>());

    // 4 5 10 16 93
    // 4 6 26 34 62
    // 4 6 62 43 26

    for (int i = n / 2; i < n; i++)
        ans = min(ans, b[i] + g[i]);

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