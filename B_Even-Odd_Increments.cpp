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
    int n, q;
    int even = 0, odd = 0,evenCount=0,oddCount=0;
    cin >> n >> q;
    int a[n];
    fl(i, n){
        cin >> a[i];
        if(a[i]%2==0){
            even += a[i];
            evenCount++;
        }

        else{
            odd += a[i];
            oddCount++;
        }
        }
        int sum = even + odd;

        while (q--)
        {
            int ind, val, ans = 0;
            cin >> ind >> val;
            if (ind == 0)
            {
                ans = sum + (evenCount * val);
                if(val%2==1)
                  {  oddCount += evenCount;
                      evenCount = 0;
                  }
            }
            else
            {
                ans = sum + (oddCount * val);
                if (val % 2 == 1)
                {
                    evenCount += oddCount;
                    oddCount = 0;
                }
            }
            sum = ans;
            cout << ans << endl;
    }
    
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }