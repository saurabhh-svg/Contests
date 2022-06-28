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
    if (n >= m) {
        int cd = m + 1,c = 1;
        for (int i = 1; i <= n; i++)  {
            for (int j = 1; j <= m; j++)     cout << c + cd * (j - 1) << " ";
            cout << endl;
            c++; cd++;
        }
    }
    else {
        int d = n + 1, c =1, cc = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)  cout << c + cc * (j - 1) << " ";
            cout << endl;
            c += d; cc++;
        }
    }
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