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
    int n, m, s = 0, e = 0;
    cin >> n >> m;
    vector<int> v;
    cout << 1 << " ";  v.pb(1);
    for (int j = 1; j < m; j++) {
        s++;
        if (s % 4 == 1 || s % 4 == 2) {
            cout << 0 << " ";
            v.pb(0);
        }
        else  {
            cout << 1 << " ";
            v.push_back(1);
        }
    } cout << endl;

    for (int j = 1; j < n; j++)   {
        e++;
        for (int k = 0; k < m; k++)  {
            if (e % 4 == 1 || e % 4 == 2)  {
                if (v[k] == 0)  cout << 1 << " ";
                else cout << 0 << " ";
            }
            else {
                if (v[k] == 0)   cout << 0 << " ";
                else cout << 1 << " ";
            }
        }
        cout << endl;
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