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
    int n, q;
    cin >> n >> q;
    string ans = "";
    vector<int> a(n),ans;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n - 1; i >= 0;i--){
        if(a[i]>q){
            ans.pb(1);
        }
    }
for(auto i:ans)
    cout << i;
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