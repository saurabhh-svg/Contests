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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = a + 1; i <= c;i++){
            if(i%(a*b)){
                cout << i << " " << i/(a*b) << endl;
                return;
            }
    }
    for (int i = b + 1; i <= d; i++) {
        if (i%(a * b)== 0)  {
            cout << i/(a * b)<< " " << i << endl;
            return;
        }
    }
    cout << "-1 -1\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }