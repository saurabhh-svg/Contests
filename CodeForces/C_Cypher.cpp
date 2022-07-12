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
    int n, x;
    cin >> n;
    int a[n];
    string s;
    fl(i, n) cin >> a[i];
    fl(i, n)
    {
        cin >> x;
        cin >> s;
        fl(j, x)
        {
            if (s[j] == 'D')
                a[i] = (a[i] + 1) % 10;
            else
            {
                if (a[i] > 0)
                    a[i] = (a[i] - 1) % 10;
                else
                    a[i] = 9;
            }
        }
    }
    for (auto i : a)
        cout << i << " ";
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