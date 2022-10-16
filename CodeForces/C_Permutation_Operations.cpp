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
    int a[n];
    vector<pair<int, int>> v;
    vector<int> ans(n, 1);

    for (int i = 0; i < n; i++)cin >> a[i];

    for (int i = 1; i < n; i++){
        if(a[i-1]-a[i]>0)
            v.push_back({(a[i-1] - a[i]), i});
    }
       

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int cnt = n - 1;

    for (int i = 0; i < v.size();i++){ ans[cnt] = v[i].second+1;
        cnt--;
    }

    for (int i = 0; i < n;i++)
        cout << ans[i] << " ";
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