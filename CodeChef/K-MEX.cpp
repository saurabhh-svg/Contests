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
    int n, m, k, c = 0,mx=INT_MIN;
    cin >> n >> m >> k;
    int a[n]; map<int, int> mp;
    fl(i, n) {
        cin >> a[i];
        mp[a[i]]++;
        mx = max(mx, a[i]);
    }  sort(a, a + n);

    if (k-m >0){
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < k;i++){
        c += mp[i];
        if(mp[i]==0){
            cout << "NO\n";
            return;
        }
    }
    for (int i = k + 1; i <= mx;i++){
        c += mp[i];
    }
    if (c < m)  cout << "NO\n";
    else   cout << "YES\n";
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

