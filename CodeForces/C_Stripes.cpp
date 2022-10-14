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
    vector<string> v(8);
    fl(i, 8) cin >> v[i];
    char ans = 'B';

    for (int i = 0; i < 8; i++)
    {
        int r = 0;
        for (int j = 0; j < 8; j++)
        {
            if (v[i][j] == 'R')
                r++;
        }
        if (r == 8)
            ans = 'R';
    }
    cout << ans << endl;
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