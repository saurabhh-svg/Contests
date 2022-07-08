#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

bool possible(vector<int> &v, int m)
{
    int remtime = 0, remwork = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (m >= v[i])
            remtime += (m - v[i]) / 2;
        else
            remwork += (v[i] - m);
    }
    if (remwork > remtime)
        return false;
    return true;
}

void solve(){
    int w, t, x, ans = 0;
    cin >> w >> t;
    vector<int> v(w, 0);
    for (int i = 0; i < t; i++)   {
        cin >> x;
        v[x - 1]++;
    }
    int hi = 2 * t, lo = 1, mid;
    while (hi >= lo) {
        mid = hi - (hi - lo) / 2;
        if (possible(v, mid)) {
            hi = mid - 1;
            ans = mid;
        }
        else
            lo = mid + 1;
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