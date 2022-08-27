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
    int n,ans=0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n;i++)  cin >> a[i];
    for (int i = 0; i < n; i++)  cin >> b[i];

    map<int, int> ma,mb;
    for (int i = 0; i < n;i++){
        ma[a[i]] = i;
        mb[b[i]] = i;
    }

    for (int i = 1; i <= n;i++){
        int d = abs(ma[i] - mb[i]);

        int diff = min(d, n - d);
        int temp = diff / 2;
        if (diff&1)  temp++;
        ans = max(temp, ans);
    }
    return ans;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) cout<<solve()<<endl;
 }