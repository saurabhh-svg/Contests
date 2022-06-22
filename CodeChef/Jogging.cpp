#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int mod = 1e9 + 7;

int binpow(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1) res = (res%mod * a%mod)%mod;
        a = (a%mod * a%mod)%mod;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    if (n == 1)   {
        cout << x << endl;
        return;
    }
    if (n == 2)  {
        cout << 2 * x << endl;
        return;
    }

    int ans = ((x % mod) * (binpow(2, n - 1) % mod)) % mod;
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