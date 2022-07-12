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
    int n, m, k,sum=0;   cin >> n >> m;
    vector<int> a(n); fl(i, n){
        cin >> a[i];
        sum += a[i];
    }
    cin >> k;
    vector<int> b(k);  fl(i, k) {
        cin >> b[i];
        sum -= b[i];
    }
    if(sum!=0){
        cout << "No\n";
        return;
    }

    //Find a mid solution in which both a and b can be coverted.
    vector<int> aa, bb;
    //Lets fully expand both the vectors a and b

    for (int i = 0; i < n;i++){
        if(a[i]%m==0)
    }
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }