#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

bool iisValid(int mid, int x, int n)
{
    int messages = 0;
    if (mid > n)
        messages = n * (n + 1) / 2 + ((n - 1) * n / 2) - ((2 * n - 1 - mid) * (2 * n - mid) / 2);
        else
        messages = (mid + 1) * mid / 2;
        

    return messages >= x;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int ans = 2 * n - 1, lo = 1, hi = 2 * n - 1, mid;
    while (lo <= hi)
    {
        mid = hi - (hi - lo) / 2;
        if (iisValid(mid, x, n))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
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