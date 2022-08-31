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
    int r, c, x, y, d, ans;
    cin >> r >> c >> x >> y >> d;
    int mxX = max(r - x, x);
    int mxY = max(c - y, y);

    // best way is to move through the edges

    if ((x-d<=1 && y-d<=1)||(r-x<=d && c-y<=d) || (r-x<=d && x-d<=1) ||(c-y<=d && y-d<=1) )  ans = -1;

    else   ans = r+c-2;
    
    
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