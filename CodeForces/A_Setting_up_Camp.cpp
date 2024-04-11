#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int a, b, c, ans = 0, rem = 0;
    cin >> a >> b >> c;

    ans += a;
    ans += b / 3;
    if (b % 3 != 0)
        rem = 3 - (b % 3);
    if (c < rem)
        ans = -1;
    else
    {
        if (rem > 0)
            ans++;
        c -= rem;
        ans += (c / 3);
        if (c % 3 != 0)
            ans++;
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