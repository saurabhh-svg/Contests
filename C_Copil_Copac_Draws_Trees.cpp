#include <bits/stdc++.h>
#define int long long int
using namespace std;

void dfs(vector<vector<int>> &adj, map<pair<int, int>, int> &mp, int &readings, int src, int par, int count)
{
    readings = max(readings, count);

    for (auto neighbour : adj[src])
    {
        if (neighbour != par)
        {
            if (mp[{src, par}] > mp[{src, neighbour}])
                dfs(adj, mp, readings, neighbour, src, count + 1);
            else
                dfs(adj, mp, readings, neighbour, src, count);
        }
    }
    return;
}

void solve()
{
    int n, readings = 1;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    map<pair<int, int>, int> mp;
    mp[{0, 1}] = 0;
    mp[{1, 0}] = 0;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        mp[{u, v}] = i;
        mp[{v, u}] = i;
    }

    dfs(adj, mp, readings, 1, 0, 1);

    cout << readings << endl;
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