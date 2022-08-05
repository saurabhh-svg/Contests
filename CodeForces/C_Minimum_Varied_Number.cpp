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
    string s = "";
    if (n < 10)cout << n << endl;
    else if (n < 18) cout << n - 9 << 9 << endl;
    else if (n < 25) cout << n - 17 << 89 << endl;
    else if (n < 31) cout << n - 24 << 789 << endl;
    else if (n < 36)  cout << n - 30 << 6789 << endl;
    else if (n < 40) cout << n - 35 << 56789 << endl;
    else if (n < 43)  cout << n - 39 << 456789 << endl;
    else if (n < 45)  cout << n - 42 << 3456789 << endl;
    else cout << 123456789 << endl;
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