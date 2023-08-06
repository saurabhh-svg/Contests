#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, k, x, y,flag=1;
    cin >> n >> m >> k >> x >> y;
    for (int i = 0; i < k; i++){
        int u, v;
        cin >> u >> v;
        int dist = abs(u - x) + abs(v - y);
        if(dist%2==0)flag = false;
    }
    if(flag)   cout << "YES\n";
    else cout << "NO\n";
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