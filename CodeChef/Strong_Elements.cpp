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
    int n, ans = 0, c;
    cin >> n;
    vector<int> v(n), prefix(n), suffix(n);
    fl(i, n) cin >> v[i];
    sort(v.begin(), v.end());
    prefix[0] = v[0];
    suffix[n - 1] = v[n - 1];
    for (int i = 1; i < n; i++) prefix[i] = __gcd(prefix[i - 1], v[i]);
    for (int i = n - 2; i >= 0; i--)  suffix[i] = __gcd(suffix[i + 1], v[i]);

    for (int i = 1; i < n - 1; i++)  {
        if (__gcd(prefix[i - 1], suffix[i + 1]) > 1)  ans++;
    }
    if (prefix[n - 2] > 1)  ans++;
    if (suffix[1] > 1) ans++;
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