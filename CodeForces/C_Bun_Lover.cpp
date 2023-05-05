#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    n++;
    int ans = (n * n) + 1;
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