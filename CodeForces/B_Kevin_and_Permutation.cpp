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
    int diff = n / 2;
    int i = 1;
 if(n&1){
     cout << n / 2 + 1 << " ";
     for (int i = 1; i <= n / 2;i++)
         cout << i << " " << i + n / 2 + 1 << " ";
 }else{
     for (int i = n / 2; i >= 1;i--)
         cout << i << " " << i + n / 2 << " ";
 }
    cout << endl;
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