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
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    vector<int> l(c), r(c), len(c + 1);
    len[0] = n;
    for (int i = 0; i < c; i++)
    {
        cin >> l[i] >> r[i];
        len[i + 1] = len[i] + (r[i] - l[i] + 1);
    }
    while (q--)
    {
        int k;
        cin >> k;
        assert(k <= len[c]);
        for (int i = c - 1; i >= 0; i--)  {
            if (k > len[i])   k = l[i] + (k - len[i] - 1);
            
        }
        assert(k <= n);
        cout << s[k - 1] << '\n';
    }
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