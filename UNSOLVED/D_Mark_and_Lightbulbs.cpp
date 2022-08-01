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
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << 0 << '\n';
        return;
    }
    if (s[0] != t[0] || s[n - 1] != t[n - 1])
    {
        cout << "-1\n";
        return;
    }

    // s[i-1]!=s[i+1]
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] != t[i])
        {
            if (s[i - 1] != s[i + 1])
                ans++;
            else
            {
                int j = i, k = i;
                while (s[j] == s[i - 1])
                {
                    j++;
                }
                while (s[k] == s[i + 1])
                {
                    k--;
                }
                if (j >= n && k < 0)
                {
                    cout << "-1\n";
                    return;
                }
                int l1 = __INT_MAX__, l2 = __INT_MAX__;
                if (j < n)
                    l1 = j - i + 1;
                if (k >= 0)
                    l2 = i - k + 1;
                ans += min(l1, l2);
            }
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