#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve()
{
    int n, m, mn = INT_MAX;
    cin >> n >> m;
    map<int, int> c;
    vector<int> v(n);
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < m; i++) {
        int x, y;  cin >> x >> y;
        c[x - 1]++;    c[y - 1]++;
        mn = min(mn, v[x - 1] + v[y - 1]);
    }
    if (m % 2 == 0) {
        cout << "0\n";
        return;
    }
    for (int i = 0; i < n; i++) vp.pb({v[i], i});
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; i++){
        if (vp[i].first < mn) {
            if (c[vp[i].second] & 1) {
                mn = vp[i].first;
                cout << mn << endl;
                return;
            } } }cout << mn << endl;
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

 
    */