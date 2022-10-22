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
    int n, ans = 0, one = 0;
    cin >> n;
    int a[n];
    fl(i, n)  {
        cin >> a[i];
        if (a[i] == 1)     one++;
    }
    if (one == n)  {
        cout << n / 3 << endl;
        return;
    }

    int preXor[n],c=0;
    preXor[0] = a[0];
    for (int i = 1; i < n; i++) {
        preXor[i] = preXor[i - 1] ^ a[i];
    }

    int st = 0, f = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1])     ans++;
        while (a[i] == 1) {
            i++;
            c++;
        }
        ans += c / 3;   c = 0;
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