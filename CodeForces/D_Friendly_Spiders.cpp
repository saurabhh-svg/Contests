#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<int> res;

void solve()
{
    int n, ans = INT_MAX, source, dest;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cin >> source >> dest;
    source--;
    dest--;
    vector<int> vis(n, 0);
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
        return;
    }

    cout << ans << endl;
    for (auto i : res)
        cout << i << " ";
    cout << endl;
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