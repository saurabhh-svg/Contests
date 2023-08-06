#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, k, H, ans = 0;
    cin >> n >> m >> k >> H;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)  {
        for (int j = 1; j < m; j++) {
            if (j * k != abs(v[i] - H)) continue;
            ans++;
        }
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