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
    string s;
    cin >> s;
    int i = 0;
    bool flag = true;
    while (s[i] == '0' && i < n)   i++;
    for (i; i < n; i++) {
        if (s[i] == '1' && flag)
            continue;
        else if (s[i] == '0' && !flag)
            continue;
        else if (!flag)
            ans++, flag = true;
        else
            ans++, flag = false;
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