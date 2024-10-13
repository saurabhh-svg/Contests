#include <bits/stdc++.h>

using namespace std;

void dfs1(int i, vector<int> adj[], int n, stack<int> &s, vector<bool> &vis)

{

    vis[i] = true;

    for (auto j : adj[i])

        if (!vis[j])

            dfs1(j, adj, n, s, vis);

    s.push(i);
}

void dfs2(int i, vector<int> adj[], vector<bool> &vis, vector<int> &temp)

{

    vis[i] = true;

    temp.push_back(i);

    for (auto j : adj[i])

        if (!vis[j])

        {

            dfs2(j, adj, vis, temp);
        }
}

void findSSC(vector<int> adj[], int n)

{

    stack<int> s;

    vector<bool> vis(n, false);

    for (int i = 0; i < n; i++)

    {
        if (!vis[i])

            dfs1(i, adj, n, s, vis);
    }

    for (int i = 0; i < n; i++)

        vis[i] = false;

    vector<int> rev[n];

    for (int i = 0; i < n; i++)

    {

        for (auto j : adj[i])

            rev[j].push_back(i);
    }

    vector<vector<int>> res;

    while (!s.empty())

    {

        int curr = s.top();

        s.pop();

        if (!vis[curr])

        {

            vector<int> temp;

            dfs2(curr, rev, vis, temp);

            res.push_back(temp);

            temp.clear();
        }
    }

    set<int> ss;

    for (int i = 0; i < res.size(); i++)

    {

        vector<int> t = res[i];

        if (t.size() >= 3)

        {

            for (int j = 0; j < t.size(); j++)

                ss.insert(t[j]);
        }
    }

    for (int i = 0; i < n; i++)

    {

        if (ss.find(i) != ss.end())

            cout << "1" << " ";

        else

            cout << "0" << " ";
    }
}

int main()
{

    int n, m;

    cin >> n >> m;

    vector<int> adj[n];

    for (int i = 0; i < m; i++)

    {

        int x;

        int y;

        cin >> x >> y;

        x--;

        y--;

        adj[x].push_back(y);
    }

    findSSC(adj, n);

    return 0;
}
