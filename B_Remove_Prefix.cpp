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
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    map<int, int> c;
    map<int, int> ind;

    fl(i,n){
        cin >> v[i];
        s.insert(v[i]);
    }

    for (int i = n - 1; i >= 0;i--){
        c[v[i]]++;
        if (c[v[i]] == 2) ind[v[i]] = i;
    }
        if (s.size() == n)
        {
            cout << 0 << endl;
            return;
        }

    int ans = 0;
    for (auto i : c)
    {
        if (i.second > 1)
            ans = max(ans, ind[i.first]+1);
}

cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }