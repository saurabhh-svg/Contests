#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int m;
    cin >> m;
    vector<int> ans(m, -1);
    vector<vector<int>> v(m);
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    map<int,int> vis;
    for (int i = m - 1; i >= 0;i--){
        for(auto x:v[i]){
            if(!vis[x]) ans[i] = x;
                vis[x] = 1;
        }
    }
        for(auto i:ans){
            if(i==-1) {
                cout << -1 << endl;
                return;
            }
        }

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
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