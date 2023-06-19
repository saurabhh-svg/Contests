#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, sum = 0, pro = 1, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        pro *= x;
    }
    if (sum < 0)
    {
        sum = abs(sum);
        ans = sum / 2 + sum % 2;
    }
    if (pro == -1 && ans % 2 == 0)
        ans++;
    if (pro == 1 && ans % 2 == 1)
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