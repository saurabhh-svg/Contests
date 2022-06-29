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
    int n; cin >> n;
    vector<int> o, e;
    fl(i, 2*n)
    {
        int x;  cin >> x;
        if (x & 1) o.pb(x);
        else    e.pb(x);
    }
    if (o.size() == e.size())
    {
        cout << 0 << endl;
        return;
    }
    if (o.size()>e.size())
    {
        int ans =( o.size() - e.size()) / 2;
        cout << ans <<endl;
        return;
    }
    int ans = 0, k = (e.size() - o.size()) / 2;
    vector<int> v;

    for (int i = 0; i < e.size(); i++)
    {
        int c = 0;
        while (e[i] % 2 == 0)
        {
            e[i] = e[i] / 2;
            c++;
        }
        v.pb(c);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < k; i++)
        ans += v[i];
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