#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int a, b, m, ans = 2;
    cin >> a >> b >> m;

    m += 1;

    ans = m / a + m / b;
    if (m % a)
        ans++;
    if (m % b)
        ans++;

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