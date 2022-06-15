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
    ll n,x; cin >> n;
    bool flag = false;
    map<ll, ll> mp;
    fl(i, n) {
        cin >> x;
        mp[x%10]++;
    }
    for (int i = 0; i < 10;i++){
        mp[i]--;
        for (int j = 0; j < 10; j++){
            mp[j]--;
            for (int k = 0; k < 10;k++){
                mp[k]--;
                if ((i + j + k) % 10 == 3 && mp[i] >=0 && mp[j]>=0 && mp[k]>=0) {
                    flag = true;
                    break;
                }
                mp[k]++;
            }
            mp[j]++;
        }
        mp[i]++;
    }
   if(flag) cout << "YES\n";
       else cout << "NO\n";
}
return 0;
 }