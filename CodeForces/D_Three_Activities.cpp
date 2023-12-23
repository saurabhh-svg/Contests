#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2, 0)), b(n, vector<int>(2, 0)), c(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        cin >> a[i][0], a[i][1] = i;
    for (int i = 0; i < n; i++)
        cin >> b[i][0], b[i][1] = i;
    for (int i = 0; i < n; i++)
        cin >> c[i][0], c[i][1] = i;

    sort(a.begin(), a.end(), greater<vector<int>>());
    sort(b.begin(), b.end(), greater<vector<int>>());
    sort(c.begin(), c.end(), greater<vector<int>>());

    for (int x = 0; x < 3; ++x)
        for (int y = 0; y < 3; ++y)
            for (int z = 0; z < 3; ++z)
                if (a[x][1] != b[y][1] && a[x][1] != c[z][1] && b[y][1] != c[z][1])
                    ans = max(ans, a[x][0] + b[y][0] + c[z][0]);

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