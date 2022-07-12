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
    string s[n];
    string ans = "";
    map<string, int> mp;
    fl(i, n)
    {
        cin >> s[i];
        mp[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        string t = s[i];
        bool flag = false;
        for (int k = 1; k < t.length(); k++)
        {
            string t1 = t.substr(0, k);
            string t2 = t.substr(k, (t.length() - k + 1));
            if (mp[t1] && mp[t2])
                flag = true;
        }

        if (flag)
            ans += '1';
        else
            ans += '0';
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