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
    int n, m, k;
    cin >> n >> m >> k;
    int p[n],mx = INT_MIN;

    for (int i = 0; i < k; i++){
        cin >> p[i];
        mx = max(mx, p[i]);
    }
    if ((m * n) & 1)
    {
        if ((m * n) <= mx)
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }

    int c = 0, cc = 0;
    sort(p,p+k);

    for (int i = k-1; i >=0; i--) {
        if ((p[i] / n) > 1)  cc += (p[i] / n);
        if ((p[i] / m) > 1)   c += (p[i] / m);
    }
    if (c >= n || cc >= m)   cout << "Yes\n";
    else   cout << "No\n";
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