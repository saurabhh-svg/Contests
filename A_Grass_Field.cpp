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
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    if (a == 0 && b == 0 && c == 0 && d == 0)
        ans = 0;
    else if ((a == 1 && d == 1 &&b == 1 && c == 1))
        ans = 2;
    else
        ans = 1;

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