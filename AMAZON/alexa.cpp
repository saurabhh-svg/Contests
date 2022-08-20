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
    int n, ans = 0;
    cin >> n;
    int a[n];
    fl(i, n) cin >> a[i];

    vector<int> pre(n, 0), suff(n, 0);

    pre[0] = a[0];
    suff[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)  pre[i] = pre[i - 1] + a[i];
    for (int i = n - 2; i >= 0; i--)    suff[i] = a[i] + suff[i + 1];

    for (int i = 0; i < n; i++)  {
        int diff = max(pre[i], suff[n - i - 1]);
        ans = max(diff, ans);
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}