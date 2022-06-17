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
    int n, sum = 0; cin >> n;
    int a[n], p[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    p[0] = a[0];
    for (int i = 1; i < n; i++)
     p[i] = a[i] + p[i - 1];

    for (int i = 0; i < n - 1; i++){
        if (p[i] <0 || a[0] < 0 || a[n - 1] > 0 || sum != 0)  {
            cout << "No\n";
            return;
        }
        if (p[i] == 0 && p[i+1]!=0) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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