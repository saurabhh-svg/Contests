#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = n / k;
    if (n % k)
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