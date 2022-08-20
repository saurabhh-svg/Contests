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
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<int> ans;
    int st1 = (b * k);
    int st = st1 + (k - 1);

    if (s - st < 0 && s - st1 < 0) {
        cout << "-1" << endl;
        return;
    }
    if (s - st < 0) {
        ans.pb(st1);
        s = s - st1;
    }
    else {
        ans.pb(st);
        s = s - st;
    }
    for (int i = 1; i < n; i++)
    {
        if (s == 0)  ans.pb(0);
        else if (s - (k - 1) >= 0) {
            ans.pb(k - 1);
            s = s - (k - 1);
        }
        else   {
            ans.pb(s);
            s = 0;
        }
    }
    if (s > 0) {
        cout << "-1" << endl;
        return;
    }

    for (auto i : ans)  cout << i << " ";
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