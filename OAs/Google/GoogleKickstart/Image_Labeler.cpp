#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

void solve(int t)
{
    int i, j, k, l, n, m;
    double cnt = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (i = n - m + 1; i < n; i++)
        cnt += v[i];
    vector<int> r;
    for (i = 0; i <= n - m; i++)
        r.pb(v[i]);
    sort(r.begin(), r.end());
    if (r.size() & 1)
        cnt += 1.0 * (r[r.size() / 2]);
    else
        cnt += 1.0 * ((r[r.size() / 2] + r[(r.size() / 2) - 1]) / 2.0);

    cout << "Case #" << t << ": " << fixed << setprecision(1) << cnt << endl;
}

//===========MAIN BEGIN===========

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}
