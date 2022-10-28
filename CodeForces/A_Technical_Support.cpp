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
    cin >> n;
    string s;
    cin >> s;
    int qq = 0, aa = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if(s[i]=='Q') qq++;
        else  aa++;
            if(qq>aa){
                cout << "No\n";
                return;
            }
    } cout << "Yes\n";
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