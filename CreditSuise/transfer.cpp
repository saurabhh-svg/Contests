#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isCyclicUtil(int v, vector<bool> &visited, vector<bool> &recStack, vector<int> adj[])
{

    if (visited[v] == false)
    {
        visited[v] = true;
        recStack[v] = true;

        // calling function recursively for all the vertices adjacent to this vertex.
        for (int i = 0; i < adj[v].size(); ++i)
        {
            if (!visited[adj[v][i]] && isCyclicUtil(adj[v][i], visited, recStack, adj))
                return true;
            else if (recStack[adj[v][i]])
                return true;
        }
    }
    recStack[v] = false; // removing the vertex from recursion stack
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    vector<bool> recStack(V, false);
    for (int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack, adj))
            return true;
    return false;
}

void solve()
{
    int v, e;
    cin >> v >> e;
    vector<int> adj[v];
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        if(x==y)
            continue;
        adj[x].push_back(y);
    }
    if (isCyclic(v,adj))
        cout << "Ineligible\n";
    else
        cout << "Eligible\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}