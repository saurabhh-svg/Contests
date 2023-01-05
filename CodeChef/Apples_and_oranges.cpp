#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, ans = 1;
    cin >> n >> m;
    ans = __gcd(n, m);
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