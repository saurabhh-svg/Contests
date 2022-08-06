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
    int n;
    cin >> n;
    int x = 0, q = n - 1, a[n];

    while (q >= 0) {
        x = sqrt(q);
        if (x * x != q)  x++;
        int p = (x * x) - q;
        for (int j = p; j <= q; j++) a[j] = (x * x) - j;
        q = p - 1;
    }

    for (auto k : a)   cout << k << " ";
    cout << endl;
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