#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

void dfs(vector<vector<int>> &adj, vector<int> &color, int src, bool &possible)
{
    for (auto nbr : adj[src])
    {
        if (color[nbr] == -1)
        {
            color[nbr] = 1 - color[src];
            dfs(adj, color, nbr, possible);
        }
        else if (color[nbr] == color[src])
        {
            possible = false;
            return;
        }
    }

    return;
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    bool possible = true;
    vector<int> color(n + 1, -1);

    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() > 2)
        {
            possible = false;
        }
        if (color[i] == -1)
        {
            color[i] = 0;
            dfs(adj, color, i, possible);
        }
    }

    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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

/*
int corner = 0, zero = 0, one = 0;
    if (a[0][0] == '1')
        one++;
    else
        zero++;
    a[0][0] = '9';
    if (a[0][n - 1] == '1')
        one++;
    else
        zero++;
    a[0][n - 1] = '9';
    if (a[n - 1][0] == '1')
        one++;
    else
        zero++;
    a[n - 1][0] = '9';
    if (a[n - 1][n - 1] == '1')
        one++;
    else
        zero++;
    a[n - 1][n - 1] = '9';

    ans += min(zero, one);
    cout << ans << " ";

    if (n & 1)
    {
        zero = 0, one = 0;
        int mid = n / 2;
        for (int i = 0; i < n; i++)
        {
            if (i != mid)
            {
                if (a[i][mid] == '0')
                    zero++;
                else
                    one++;
            }
            a[i][mid] = '9';
        }
        for (int i = 0; i < n; i++)
        {
            if (i != mid)
            {
                if (a[mid][i] == '0')
                    zero++;
                else
                    one++;
            }
            a[mid][i] = '9';
        }
        ans += min(one, zero);
        cout << ans << " ";
    }

    zero = 0, one = 0;

    fl(i, n)
    {
        fl(j, n)
        {
            if (a[i][j] == '0')
                zero++;
            if (a[i][j] == '1')
                one++;
        }
        
    }
    cout << " " << one << zero << " ";
    ans += min(zero, one);
    */