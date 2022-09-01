#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int M = 1000000007;

int factorial(int n)
{

    int f = 1;
    for (int i = 1; i <= n; i++)
        f = (f * i) % M; // Now f never can
                         // exceed 10^9+7
    return f;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // nck
    int ans = (((factorial(n)) % M) /( (factorial(n - k)) % M)) %M;
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