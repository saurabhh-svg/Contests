#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

void solve(int t)
{
    int n, m, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)     cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)   cin >> b[i];
    map<int, int> mp;
    for (int i = 0; i < m; i++)  mp[b[i]]=i;
    int last = mp[a[0]];
    for (int i = 1; i < n; i++)
    {
        ans += abs(mp[a[i]] - last);
        last = mp[a[i]];
    }
        cout << "Case #" << t << ": " << ans << endl;
    }

    //===========MAIN BEGIN===========

    signed main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int test;
        cin >> test;
        for (int i = 1; i <= test; i++)
            solve(i);
        return 0;
    }
