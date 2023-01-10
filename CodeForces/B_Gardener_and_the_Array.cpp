#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, x, c = 0;
    cin >> n;
    vector<vector<int>> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        for (int k = 0; k < x; k++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
            mp[temp]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < v[i].size(); k++)
            mp[v[i][k]]--;

        c = 0;
        for (int k = 0; k < v[i].size(); k++)
        {
            if (mp[v[i][k]] > 0)
                c++;
        }
        if (c == v[i].size())
        {
            cout << "Yes\n";
            return;
        }
        for (int k = 0; k < v[i].size(); k++)
            mp[v[i][k]]++;
    }
    cout << "No\n";
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