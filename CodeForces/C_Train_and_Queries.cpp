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
    vector<int> v(n);
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]].pb(i);
    }
       
    

    
    while (q--)
    {
        int a, b, f = 0;
        cin >> a >> b;
        if (mp.find(a) == mp.end() || mp.find(b) == mp.end() || mp[a].size()==0){
            cout << "NO\n";
        }else if(mp[a][0]<mp[b][mp[b].size()-1]){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
        }
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