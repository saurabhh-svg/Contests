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
    int a[k];
    bool flag1 = false, flag2 = false;
    for (int i = 0; i < k; i++)   cin >> a[i];
    int c = 0, cc = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] / n > 2) flag1 = 1;
        if (a[i] / n >= 2) c += a[i] / n;
    }
    if (c >= m && (flag1 || m % 2 == 0)) {
        cout << "Yes" << endl;
        return;
    }
    for (int i = 0; i < k; i++){
        if (a[i] / m > 2)   flag2 = 1;
        if (a[i] / m >= 2) cc+= a[i] / m;
    }
    if (cc >= n && (flag2 || n % 2 == 0)) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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