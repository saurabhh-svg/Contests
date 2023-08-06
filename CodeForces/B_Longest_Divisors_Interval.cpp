#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, temp = 1e9;
    cin >> n;

    // vector<int> div = printDivisors(n);
    int ans = 0, count = 0;

    for (int i = 1; i <= min(n,100ll); i++)
    {
        if (n % i == 0 && (i == 1 || (i>1 && n % (i - 1) == 0)))
            count++;
        else
            count = 0;
        ans = max(count, ans);
    }
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