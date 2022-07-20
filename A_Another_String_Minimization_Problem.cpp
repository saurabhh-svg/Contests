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
    int n, m;
    cin >> n >> m;
    int a[n];
    fl(i, n)
    {
        cin >> a[i];
        a[i]--;
    }
    string s(m, 'B');
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= (m -1- a[i]))
        {
            if (s[a[i]] == 'B')
                s[a[i]] = 'A';
            else
                s[m -1- a[i]] = 'A';
        }
        else
        {
            if (s[m -1- a[i]] == 'B')
                s[m -1- a[i]] = 'A';
            else
                s[a[i]] = 'A';
        }
    }
    cout << s << endl;
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