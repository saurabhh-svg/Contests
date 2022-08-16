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
void solve()
{
    int n, x, y, ans = 0, zero, one;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++)    cin >> v[i];
    cin >> x >> y;
    for (int l = 0; l < n; l++)
    {
        int r = n - 1;
        while (l <= r)
        {
            zero = 0, one = 0;
            for (int k = l; k <= r; k++)
            {
                if (v[k] == 0)
                    zero++;
                if (v[k] == 1)
                    one++;
            }
            
            if ((zero / one) == (x / y))
                ans = (ans + 1) % mod;
            r--;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}