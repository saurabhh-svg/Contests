#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 1, sum = 0, pref = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n - 1; i += 1)
    {
        sum -= a[i];
        pref += a[i];
        ans = max(ans, __gcd(sum, pref));
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
// 1 3 4 5 6 9
// 7 14 21 28 35 42