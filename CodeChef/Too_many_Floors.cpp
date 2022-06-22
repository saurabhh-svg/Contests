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
    int a, b, ans = 0, fa = 0, fb = 0;
    cin >> a >> b;
    for (int i = 0; i < 10; i++)
    {
        if (a >= (10 * i) + 1 && a <= 10 * (i + 1))
            fa = i;
        if (b >= (10 * i) + 1 && b <= 10 * (i + 1))
            fb = i;
    }
    ans = abs(fb - fa);
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