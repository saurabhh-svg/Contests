#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a < b && a < c && c<d && b<d) || (c < d && c < a && d<b && a<b) || (d < b && d < c && b<a && c<a) || (b < d && b < a && a<c && d<c))
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