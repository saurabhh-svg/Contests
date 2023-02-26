#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<int> g[100005];
vector<int> parent;
int color[100005];
int max_sum = -1;

void dfs(int u)
{
    color[u] = 1;
    for (int v : g[u]) {
        if (color[v] == 0) {
            parent.push_back(v);
            dfs(v);
            parent.pop_back();
        }
        else if (color[v] == 1)   {
            int fl = 0;
            vector<int> tmp_cycle;
            for (auto x : parent)
            {
                if (x == v)
                    fl = 1;
                if (fl)
                    tmp_cycle.push_back(x);
            }
            int sum = tmp_cycle.size();
            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }
    color[u] = 2;
}

int longestCycle()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int u = 0; u < m; u++)
    {
        if (color[u] == 0)
        {
            parent.push_back(u);
            dfs(u);
            parent.pop_back();
        }
    }
    return max_sum;
}



signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout << longestCycle();
}