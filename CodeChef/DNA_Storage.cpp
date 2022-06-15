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
    string s, ans = "";
    cin >> s;
    for (int i = 0; i < n; i = i + 2)
    {
        if (s.substr(i, 2) == "00")
            ans += 'A';
        else if (s.substr(i, 2) == "01")
            ans += 'T';
        else if (s.substr(i, 2) == "10")
            ans += 'C';
        else
            ans += 'G';
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