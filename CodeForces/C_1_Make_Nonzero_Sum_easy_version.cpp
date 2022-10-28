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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<pair<int, int>> ans;
    fl(i, n) cin >> v[i];
    if (n & 1) {
        cout << "-1\n";
        return;
    }
    int c = 0;
    for (int i = 0; i < n; i += 2) {
        if (v[i] == v[i + 1]) {
            ans.pb({i + 1, i + 2});
            c++;
        }
        else  {
            c += 2;
            ans.pb({i + 1, i + 1});
            ans.pb({i + 2, i + 2});
        }
    }
    cout << c << endl;

    for (auto i : ans)
        cout << i.first << " " << i.second << "\n";
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