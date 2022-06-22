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
    int n,days;
    cin >> n;
    vector<int> shops(n);
    fl(i, n) cin >> shops[i];
    sort(shops.begin(), shops.end());
    cin >> days;
    while (days--)  {
        int x;  cin >> x;
        int hi = n - 1, lo = 0, mid;
        while (hi > lo)
        {
            mid = (hi + lo) / 2;
            if(shops[mid]<=x)  lo = mid + 1;
            else hi = mid - 1;
        }
       if(shops[lo]<=x)
           lo++;
       cout << lo << endl;
    }
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
 }