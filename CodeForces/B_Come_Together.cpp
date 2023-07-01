#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int xa, ya, xb, xc, yb, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    int x = 0, y = 0;

    // diff side of x

    if (((xa - xb) > 0 && (xa - xc) < 0) || ((xa - xb) < 0 && (xa - xc) > 0))
    {
        x = 0;
    }
    else {
        //same side
        int x1 = abs(xa - xb);
        int x2 = abs(xa - xc);
        x = min(x1, x2);
    }

    // diff on y
    if (((ya - yb) > 0 && (ya - yc) < 0) || ((ya - yb) < 0 && (ya - yc) > 0))
    {
        y = 0;
    }
    else
    {
        // same side
        int y1 = abs(ya - yb);
        int y2 = abs(ya - yc);
        y = min(y1, y2);
    }

    cout << x + y + 1 << endl;
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