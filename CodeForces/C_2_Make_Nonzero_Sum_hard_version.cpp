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
    int n,c=0;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    vector<pair<int, int>> ans;

    int i = 0;

    while(i<n){
        if (v[i] == 0)
        {
            c++;
            ans.pb({i + 1, i + 1});
            i++;
        }
       else if(v[i]==v[i+1]){
            c++;
            ans.pb({i + 1, i + 2});
            i += 2;
        }else if(v[i]!=v[i+1]){
            c += 2;
            ans.pb({i + 1, i + 1});
            ans.pb({i + 2, i + 2});
            i += 2;
        }
    }

        cout << c << endl;
    for (auto i : ans)
        cout << i.first << " " << i.second << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }