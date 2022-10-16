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
    int a[n];
    fl(i, n) cin >> a[i];
    string s;
    cin >> s;
    map<int, char> m;
    fl(i, n)
    {
        if(m[a[i]]){
            if(m[a[i]]!=s[i]){
                cout << "NO\n";
                return;
            }
        }
        m[a[i]] = s[i];
    }
    cout << "YES\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }