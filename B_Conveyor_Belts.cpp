#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, a, b, c, d, ans = INT_MAX;
    cin >> n >> a >> b >> c >> d;
    ans = min(abs(a - d), abs(c - b));
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
