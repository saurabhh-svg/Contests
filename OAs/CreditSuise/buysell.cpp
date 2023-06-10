#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve()
{
    int price;
    cin >> price;
    int odd = 0, even = 0;
    // for (int i = 1; i * i <= price; i++) {
    //     if (price % i == 0)  {
    //         if ((price / i)&1)  odd++;
    //         else   even++;
    //         if(i&1) odd++;
    //         else  even++;
    //     }
    //     if(i==price/i){
    //         if(i&1)   odd -- ;
    //         else  even--;
    //     }
    // }
    if (price & 1)
    {
        cout << "SELL\n";
        return;
    }
    if (price % 2 == 0 && (price / 2) % 2 == 1)
        cout << "PASS\n";
    else
        cout << "BUY\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}