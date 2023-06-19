#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, k, g, ans;
    cin >> n >> k >> g;
    if (k * g - (((g + 1) / 2) - 1) * n < 0)
        ans = k * g;
    else
        ans = k * g - ((((k * g - (((g + 1) / 2) - 1) * n + g - 1) / g) * g));

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
