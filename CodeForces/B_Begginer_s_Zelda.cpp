#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0, c = 0;
    cin >> n;
    map<int, int> count;
    map<int, vector<int>> mp;

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    for (auto i : mp)
    {
        count[i.first] = i.second.size();
    }

    for (auto i : count)
    {
        if (i.second == 1)
            c++;
    }

    // cout << c << " ";

    ans = (c + 1) / 2;

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