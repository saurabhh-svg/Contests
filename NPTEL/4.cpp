#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve(){
    int n, q,sum=0;
    cin >> n >> q;
    int a[n], x[q];
    for (int i = 0; i < n; i++)  cin >> a[i];
    for (int j = 0; j < q; j++)  cin >> x[j];
    sort(a, a + n);
    for (int p = 0; p < q; p++) {
        int count = 0; sum = 0;
        for (int r = n - 1; r >= 0; r--) {
            sum += a[r];     count++;
            if (sum >= x[p])  {
                cout << count << "\n";
                break;
            }
        }
        if (sum < x[p])    cout << "-1\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--) solve();
}