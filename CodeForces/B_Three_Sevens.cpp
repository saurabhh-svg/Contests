#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int m;
    cin >> m;
    vector<int> ans(m + 1);
    map<int, vector<int>> mp;
    for (int i = 1; i <= m; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }
    }
    set<int> s;
    for (auto i : mp)
    {
        if (i.second.size() > 0)
        {
            ans[i.second[i.second.size() - 1]] = i.first;
            int l = s.size();
            s.insert(i.first);
            if (s.size() == l)
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    for (int i = 1; i <= m; i++)
        cout << ans[i] << " ";
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