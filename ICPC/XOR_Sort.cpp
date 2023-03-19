#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), u;
    vector<pair<int, int>> ind, ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ind.push_back({v[i], i});
    }
    sort(ind.begin(), ind.end());

    for (int j = n - 1; j > 0; j--)
    {
        if (ind[j].second != j)
        {
            int temp = ind[j].second;
            ans.push_back({j, ind[j].second});
            ans.push_back({ind[j].second, j});
            ans.push_back({j, ind[j].second});
            ind[ind[j].second].second = temp;
        }
    }
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i.first << " " << i.second << endl;
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