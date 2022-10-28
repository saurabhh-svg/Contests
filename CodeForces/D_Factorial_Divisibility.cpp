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
    int n, k;  cin >> n >> k;
    vector<int> v(n);
    fl(i, n) cin >> v[i];

    map<int, int> count;
    for (auto i : v)
        count[i]++;

    for (int i = 1; i <= k-1; i++)  {
        if (count[i] % (i + 1)==0)
            count[i + 1] += (count[i] / (i + 1));
        else {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}