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
    int n, ans = -1;
    cin >> n;
    vector<int> index(1001, -1);
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        index[x] = i + 1;
    }

    for (int i = 1; i <= 1000; i++){
        for (int j = 1; j <= 1000; j++)   {
            if (index[i] != -1 && index[j] != -1 && __gcd(i , j ) == 1)
                    ans = max(ans, (index[i] + index[j]));
            
        }
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