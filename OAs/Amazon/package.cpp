#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
int solve(){
int n,ans=0; cin>>n;
int a[n];
map<int, int> mp;

for (int i = 0; i < n;i++) cin >> a[i];

for (int i = 0; i < n; i++) mp[a[i]]++;

for(auto i:mp){
    int temp = i.second;
    if(temp==1)   return -1;
    ans += (temp / 3);
    if(temp%3!=0)   ans++;
}
return ans;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout<<solve();
 }