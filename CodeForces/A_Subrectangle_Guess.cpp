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
    cin >> n >> m;
    int t, mx = INT_MIN, x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)  {
            cin >> t;
            if (t > mx)  {
                mx = t;
                x = i + 1;
                y = j + 1;
            }
        }
    }

    int ans1 = max(n - x + 1, x);
    int ans2 = max(m - y + 1, y);
    cout << ans1 * ans2 << endl;
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