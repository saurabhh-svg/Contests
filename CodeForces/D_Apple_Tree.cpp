#include <bits/stdc++.h>
#define int long long int
using namespace std;

void dfs(int u, int p, vector<vector<int>> &adj, vector<int> &leaf){
    for (int v : adj[u]){
        if (v != p){
            dfs(v, u, adj,leaf);
            leaf[u] += leaf[v];
        }
    } 
    if (leaf[u] == 0) 
        leaf[u] = 1;
}

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    vector<int> leaf(n,0);
     dfs(0, -1, adj,leaf);
    int q; cin >> q;
    while (q--){
        int x, y;cin >> x >> y;
        int ans =leaf[x-1] * leaf[y-1];
        cout << ans << endl;
    }
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