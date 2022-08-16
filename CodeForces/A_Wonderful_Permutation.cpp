#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve(){
    int n, k,ans=0;
    cin >> n >> k;
    map<int, int> m;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    for (int i = 0; i < k; i++)
        m[v[i]]++;

    for (int i = 1; i <= k; i++){
        if (m[i] == 0) ans++;
    }
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }