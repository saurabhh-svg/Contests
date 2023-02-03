#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 0, coins;
    cin >> n >> coins;
    int a[n], cost[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cost[i] = (a[i] + i + 1);
    }
    sort(cost, cost + n);
    for (int i = 0; i < n; i++)
    {
        if ((coins - cost[i]) < 0)
     break;
        ans++;
        coins -= cost[i];
    }

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