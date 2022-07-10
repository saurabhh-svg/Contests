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
    int a[n], b[n + 1];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == i + 1)
            b[i + 1] = 1;
    }
    if (a[n - 2] == 0)
    {
        b[n - 2] = n;
        mp[n]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i - 1] == 0)
        {
            for (int j = i + 1; j <= n; j++)
                mp[j]++;
        }
        else if()
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