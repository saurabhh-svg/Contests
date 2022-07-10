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
    set<char> c;
    int ans = 1;
    if(s.size()<=3){
        cout << 1 << endl;
        return;
    }
    c.insert(s[0]);
    c.insert(s[1]);
    c.insert(s[2]);

    for (int i = 3; i < s.size();i++)  {
        c.insert(s[i]);
       // cout << s[i] << " " << c.size() << " " << ans << endl;
        if (c.size() > 3)
        {
            ans++;
            c.clear();
            c.insert(s[i]);
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