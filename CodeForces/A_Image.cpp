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
    string a, b;
    cin >> a >> b;
    int ans = 0;
    set<char> s;
    s.insert(a[0]);
    s.insert(a[1]);
    s.insert(b[0]);
    s.insert(b[1]);

    int l = s.size();
    if(l==1)
        ans = 0;
    else if(l==2)
        ans = 1;
    else if(l==3)
        ans = 2;
    else
        ans = 3;
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }