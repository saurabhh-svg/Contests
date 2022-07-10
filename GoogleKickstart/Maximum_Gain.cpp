#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;



void solve(int testt)
{
    int n, m, k, i, w = 0, c, s, t, p = 0, q = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x, p += x;
    cin >> m;
    vector<int> b(m);
    for (auto &x : b)
        cin >> x, q += x;
    cin >> k;
    k = n + m - k;
    for (int l = 0; l <= k; l++)
    {
        if (l > n || k - l > m)
            continue;
        for (i = 0, c = 0; i < l; i++)
            c += a[i];
        s = c;
        for (; i < n; i++)
            c += a[i] - a[i - l], s = min(s, c);
        for (i = 0, c = 0; i < k - l; i++)
            c += b[i];
        t = c;
        for (; i < m; i++)
            c += b[i] - b[i - k + l],t = min(t, c);
        w = max(w, p - s + q - t);
    }
    cout << "Case #" << testt << ": " <<w << endl;
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

