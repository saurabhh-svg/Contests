#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;

int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

void solve()
{
    int cutoff, n, ans = 0;
    cin >> cutoff >> n;
    int a[n];
    for (int i = 0; i < n; i++)   cin >> a[i];
    int pre[n];
    pre[0] = a[0];

    for (int i = 1; i < n; i++)    pre[i] = pre[i - 1] + a[i];

    int j = 0;
// 10 15 17 23
    for (int i = 0; i < n; i++) {
        if (pre[i] < cutoff) ans++;
        for (int j = 0; j < i;j++){
            if(pre[i]-pre[j]<cutoff)
                ans++;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}