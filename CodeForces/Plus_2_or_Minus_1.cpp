#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int y, ans = 1;
    cin >> y;
    if (y == 0)
        ans = 1;

    else
        ans = 3 * y;
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

/*
5
0 -1 -2 -3 -4 -5
2 4 6 8 10
1

1
0 -1
2

3
0 -1 -2 -3
2 4 6
1 3
*/