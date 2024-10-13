#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a / 3 + b / 3 + c / 3;
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