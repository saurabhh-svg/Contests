#include <bits/stdc++.h>
#define int long long int
using namespace std;

void dfs(int curr, vector<vector<int>> &adj, vector<int> &visited,int k)
{
    visited[curr] = 1;
    for (auto i : adj[curr])
    {
        if (!visited[i] && abs(curr-i)>=k)
            dfs(i, adj, visited,k);
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n);

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int k = 1; k <= n; k++)
    {
        int count = 0;
        vector<int> visited(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                cout << i << " ";
                dfs(i, adj, visited, k);
                count++;
            }
        }
        // cout<<count<<" ";
        cout << endl;
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}