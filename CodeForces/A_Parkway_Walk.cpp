#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test;cin>>test;
while(test--)
{
    ll n, m,sum=0,x;
    cin >> n >> m;
    fl(i, n) {
        cin >> x;
        sum += x;
    }
    if(sum-m > 0) cout << sum - m << endl;
    else  cout << 0 << endl;
}
return 0;
 }