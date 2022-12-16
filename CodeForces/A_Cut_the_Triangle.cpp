#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int x[3], y[3];
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

    sort(x, x + 3);
    sort(y, y + 3);
    if ((x[1] > x[0] && x[1] < x[2]) || (y[1] > y[0] && y[1] < y[2]))
        cout << "YES\n";

    else

        cout << "NO\n";
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