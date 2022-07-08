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
    int w, t, ans = 0, free = 0;
    cin >> w >> t;
    map<int, int> mp;
    vector<int> v(t);
    fl(i, t){
        cin >> v[i];
        mp[v[i]]++;
    }
    fl(i, t) v[i] = mp[i + 1];
    sort(v.begin(), v.end());

    int hi=t-1
   
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