#include <bits/stdc++.h>
#define int long long int
using namespace std;
int mod = 1e9 + 7;
void solve()
{
    int n, ans = 1;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    for (int i = 1; i <= n;i++)   ans = (ans * i) % mod;
    // ans = nC2 * n!
    int times = (n * (n - 1)) % mod;
    ans = (ans%mod *  times% mod)%mod;
    cout << ans%mod << endl;
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
n=4
1 2 3 4 4 3 2 1 
4 3 2 1 1 2 3 4
1 2 3 3 2 1 


*/
