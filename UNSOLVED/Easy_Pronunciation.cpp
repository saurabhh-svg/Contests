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
    string s;
    cin >> n >> s;
   for(auto i:s){
       if (i == 'a' || i=='e' ||i=='o' || i=='i'||i=='u')  c = 0;
        else
            c++;
        if(c>=4){
            cout << "NO\n";
            return;
        }
   }
   cout << "YES\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }