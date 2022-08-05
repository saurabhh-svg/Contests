#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) v[i] = i + 1;
    int k = n - 1;
    cout << n << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
        swap(v[k], v[k - 1]);
        k--;
    }
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }