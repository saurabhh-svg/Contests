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
    int i = 1, j = n;
    while (i <= j)
    {
        if(i==j)
            cout << i;
    else
        cout << j << " " << i << " ";
        j--;
        i++;
    }
 cout << "\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }