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

    string s;
    cin >> s;
    int k;
    cin >> k;
    bool flag = false;
    int i = 0, c = 0, ans = k, p = 0;
    while (i < s.size())
    {
        if (s[i] == '1')
            c++;
        if (s[i] == '0' && flag == false)
        {
            p = i;
            flag = true;
            c += k;
            i = i + k;
        }
        else
        {
            ans = max(c, ans);
            i = p;
            c = 0;
            i++;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}