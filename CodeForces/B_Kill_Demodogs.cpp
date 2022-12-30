#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0, temp = 0;
    cin >> n;
    int mod = 1e9 + 7;
    ans = (((((((n % mod) * ((n + 1) % mod)) % mod) * ((2 * n + 1) % mod)) % mod) % mod) / 6)%mod;
    n--;
    temp = (((((((n % mod) * ((n + 1) % mod)) % mod) * (n + 2) % mod) % mod) % mod )/ 3)%mod;
    ans = ((ans % mod) + (temp % mod)) % mod;

    ans = ((ans % mod) * (2022 % mod)) % mod;
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