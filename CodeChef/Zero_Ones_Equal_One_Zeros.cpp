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
    cin >> n;
    string ans = "";
    if (n & 1)
    {
        fl(i, n / 2) ans += "10";
        ans += "1";
    }
    else {
    if(n%4==0){
        fl(i, n / 4) ans += "01";
        fl(i, n / 4) ans += "10";
    }else{
        ans += "01";
        fl(i, n - 4) ans += "1";
        ans += "10";
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