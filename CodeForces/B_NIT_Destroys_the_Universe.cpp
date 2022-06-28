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
    int n, count = 0;
    cin >> n;
    vector<int> a(n);

    for (int j = 0; j < n; j++)  cin >> a[j];

    if (a[0] != 0)  count++;
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] == 0 && a[j + 1] != 0)
            count++;
    }
    if(count>2)
        count = 2;
    cout << count << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test; cin >> test;
    while (test--)   solve();
}
