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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 1;
    while (i < n)
    {
        if (v[i] < v[i - 1])
        {
            if (v[i] + v[i - 1] > m)
            {
                cout << 0 << endl;
                return;
            }
            else
                swap(v[i], v[i + 1]);
            i++;
        }
        else
            i++;
    }
    cout << 1 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}