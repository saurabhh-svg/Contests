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
    int n, k;
    cin >> n >> k;
    vector<int> v, vv, vvv, vvvv;
    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0)   v.pb(i);
        else if (i % 4 == 1) vv.pb(i);
        else if (i % 4 == 2)  vvv.pb(i);
        else if (i % 4 == 3)  vvvv.pb(i);
    }
    if (k % 4 == 0)  cout << "NO\n";
    else {
        cout << "YES\n";
        if (k % 4 == 2){
            fl(i, vvv.size()) cout << vvv[i] << " " << vv[i] << "\n";
            fl(i, v.size()) cout << vvvv[i] << " " << v[i] << "\n";
        }
        else if (k % 4 == 1)  {
            fl(i, v.size()) cout << vvvv[i] << " " << v[i] << "\n";
            fl(i, vv.size()) cout << vv[i] << " " << vvv[i] << "\n";
        }
        else   {
            fl(i, vvvv.size()) cout << vvvv[i] << " " << v[i] << "\n";
            fl(i, vv.size()) cout << vv[i] << " " << vvv[i] << "\n";
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

/*

 count = min(v.size(), n / 2);
        for (int i = 0; i < count; i++){
            ans[0][i] = v[i];
            mp[v[i]]++;
        }
        count = min(n / 2 - v.size(), vv.size());

        for (int i = 0; i < min(n / 2 - v.size(), vv.size()); i++)
        {
            ans[i][0] = vv[i];
            mp[v[i]]++;
        }
        int k = 0;
        count = min(v.size(), n / 2);
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                if (count > 0)
                {
                    ans[k++][1] = i;
                    count--;
                }
                else
                {
                    ans[0][k++] = i;
                }
            }

*/