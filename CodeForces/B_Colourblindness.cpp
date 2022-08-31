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
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R' && b[i] == 'R')  continue;
        else if ((a[i] == 'B' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'B') || (a[i] == 'G' && b[i] == 'G'))
            continue;
        else
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
    while (test--)
        solve();
}