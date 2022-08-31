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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)   {
        cin >> v[i];
        m[v[i]]++;
    }

    cout << "Case #" << t << ": ";
    if (k * 2 < n)
    {
        cout << "NO\n";
        return;
    }

    for (auto i : m)
    {
        if (i.second > 2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
}