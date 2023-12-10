#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int curr = 0, ans = INT_MAX;
    for (auto i : v) {
        cout << ans << " ";
        ans = min(ans, i - curr);
        curr = i;
    }
    ans = min(ans, n - v[x - 1]);
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