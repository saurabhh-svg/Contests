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
    int n, ans = 0;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)  cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int c = 0;
           c = (a[i][j] - '0') + (a[n - j - 1][i] - '0') + (a[j][n - i - 1] - '0') + (a[n - i - 1][n - j - 1] - '0');
            //cout << c << " ";
           
                ans += min((4 - c),c);
                a[i][j] = '1';
                a[n - j - 1][i] = '1';
                a[j][n - i - 1] = '1';
                a[n - i - 1][n - j - 1] = '1';
            
        }
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