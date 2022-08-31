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
    string s;
    map<string, vector<int>> count;

    int ans[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        count[s].pb(0);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        count[s].pb(1);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        count[s].pb(2);
    }

    for (auto i : count)
    {
        if (i.second.size() == 3)  continue;
        else if (i.second.size() == 1)
            ans[i.second[0]] += 3;
        else
        {
            ans[i.second[0]]++;
            ans[i.second[1]]++;
        }
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
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