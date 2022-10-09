#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int helper(int mid, int x[], map<int, vector<int>> mp, int n)
{
    int ans = 0;
    for (auto i : mp)
    {
        for (auto j : i.second)
        {
            ans = ans + (i.first - mid);
            ans += j;
        }
    }
    return ans;
}

void solve()
{
   int n, ans = INT_MAX;
    cin >> n;
    double t[n], x[n];
    double lo = 0, hi = 0, mid;
    map<double, vector<double>> mp;
    fl(i, n)
    {
        cin >> x[i];
        lo = min(lo, x[i]);
        hi = max(hi, x[i]);
    }
    fl(i, n)
    {
        int p;
        cin >> p;
        mp[x[i]].push_back(p);
    }

    while (lo <= hi)
    {
        mid = (hi + lo) / 2.0;
        int temp = helper(mid, x, mp, n);
        if (temp > ans)
            hi = mid - 1;
        else
            lo = mid + 1;
        ans = min(temp, ans);
    }
    cout << mid << endl;
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