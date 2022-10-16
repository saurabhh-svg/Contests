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
    int n;
    char curr;
    string s;
    cin >> n >> curr >> s;
    int ans = 0, c = 0;
    for (int i = 0; i < 2 * n + 1;i++){
        if(s[i%n]=='g') {
            ans = max(ans, c);
            c = 0;
        }else if(s[i%n]==curr){
            if(c>=0)
                c++;
            else
                c = 1;
        }else{
            if(c<=0)
                c = -1;
            else
                c++;
        }
    }
        cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}