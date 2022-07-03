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
    int n, l, r;
    cin >> n;
    vector<int> prefix(n+2, 0),ans;

    for (int i = 1; i <= n; i++) {
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            prefix[j] = prefix[j] + 1;
            if (i == j) {
                prefix[j] = prefix[j] - 2;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (prefix[i] == n - 1)     {
            ans.pb(i);
        }
    }

    cout << ans.size() << "\n";

   for(auto i: ans) cout << i << endl;
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