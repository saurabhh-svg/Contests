#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;

    if (m & 1)
        ans = n * (m - 1) / 2;
    else
        ans = (n * m) / 2;

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