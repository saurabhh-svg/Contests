#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve(int t)
{
    int n, cost = 0;
    cin >> n;
    vector<int> a(n);
    fl(i, n) cin >> a[i];

    for (int i = 0; i < n-1; i++)
    {
        int m = *min_element(a.begin() + i, a.end());
        auto x = find(a.begin(), a.end(), m);
        reverse(a.begin() + i, x + 1);
        cost += distance(a.begin(), x) - i+1;
    }

    cout << "Case #" << t << ": " << cost << endl;
}

//===========MAIN BEGIN===========

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
}