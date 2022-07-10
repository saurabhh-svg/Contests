#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
int cnt = 0;
void dfs(map<int, set<int>> &adj, int u, int parent, vector<bool> &vis){
    if (vis[u]) return;
    vis[u] = true;
    cnt++;
    for (auto it = adj[u].begin(); it != adj[u].end(); it++) {
        if (*it == parent)  continue;
        if (vis[*it]) continue;
        dfs(adj, *it, u, vis);
    }
}

void solve(){
    int n;  cin >> n;
    map<int, int> mp;
    int u, v;
    map<int, set<int>> adj;
    bool flag = true;
    for (int i = 0; i < n; i++){
        cin >> u >> v;
        mp[u]++;
        mp[v]++;
        if (u == v)  {
            cout << "NO\n";
            return;
        }
        adj[u].insert(v); adj[v].insert(u);
    }
    for (auto it : mp) {
        if (it.second != 2)  {
            cout << "NO\n";
            return;
        }
    }
    vector<bool> vis(n + 1, false);

    for (int i = 1; i <= n; i++) {
        cnt = 0;
        if (!vis[i])  dfs(adj, i, -1, vis);
        if (cnt%2) {
            cout << "NO\n";
            return;
        }
    }cout << "YES\n";
}

signed
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}