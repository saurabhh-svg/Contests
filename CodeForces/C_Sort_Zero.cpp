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
    bool f = false;
    cin >> n;
    map<int, int> c;
    vector<int> v(n);
    fl(i, n)
    {
        cin >> v[i];
        c[v[i]]++;
    }
    c[v[n - 1]]--;
    int j = n - 2;

    for (j; j >= 0; j--)
    {
        if (v[j] == v[j + 1])
            c[v[j]]--;
        else if (v[j] < v[j + 1])
        {
            if (c[v[j + 1]] != 0)
            {
                j++;
                f = true;
                break;
            }
            else
                c[v[j]]--;
        }
        else
            break;
        if (f)
            break;
    }
    int ans = 0;
    for (auto i : c)
    {
        if (i.second != 0)
            ans += 1;
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