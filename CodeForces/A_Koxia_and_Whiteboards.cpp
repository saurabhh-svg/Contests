#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++)
    {
        a[0] = b[i];
        sort(a.begin(), a.end());
    }
    for (auto i : a)
        ans += i;
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