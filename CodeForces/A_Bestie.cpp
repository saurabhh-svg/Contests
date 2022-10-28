#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];

    int f = v[0];
    for (int i = 1; i < n;i++)
        f =__gcd(f, v[i]);

        if(f==1)
            ans = 0;
        else {
           if(__gcd(f,__gcd(n,v[n-1]))==1)
               ans = 1;
            else if(__gcd(f,__gcd(n-1,v[n-2]))==1)
                ans = 2;
            else
                ans = 3;
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