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
    int n, k, ans = INT_MIN; cin >> n;
    int a[n]; fl(i, n) cin >> a[i];
    cin >> k;
    set<int> s;
    int pre[n+1];  pre[0] = 0;

    for (int i = 0; i < n; i++)     pre[i+1] = pre[i] + a[i];

       for (int i = 0; i <= n - k; i++) {
           set<int> s;
           for (int j = i; j < i + k; j++) s.insert(a[j]);
           
           if (s.size() == k) ans = max(ans, (pre[i + k] - pre[i]));
       }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}