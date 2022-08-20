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
    int n, k;
    cin >> n;
    int a[n];
    fl(i, n) cin >> a[i];
    cin >> k;
    sort(a, a + n);
    int ans = 0, p = 0, c = 0;
    for (int i = 1; i <= a[n - 1] && c <= k; i++)
    {
        if (i != a[p])
        {
            ans += i;
            c++;
        }
        else
            p++;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}