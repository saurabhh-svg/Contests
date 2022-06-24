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
    int n, a, b;
    cin >> a >> b >> n;
    int temp = 0;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    int cn = __builtin_popcount(n);
    int ca = __builtin_popcount(a);
    int cb = __builtin_popcount(b);
    for (int i = 0; i < 32; i++)
    {
        if ((a >> (i & 1)) & (b >> (i & 1)) == 0)
    }

    int ans = abs(cb - ca);
    if (cn >= ans)
        cout << ans << endl;
    else
        cout << "-1" << endl;
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