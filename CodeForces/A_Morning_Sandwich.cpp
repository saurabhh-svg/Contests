#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int bread, s, h, ans = 0;
    cin >> bread >> s >> h;
    if (bread > s + h)
        ans = 2 * (s + h) + 1;
    else
        ans = 2 * bread - 1;
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