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
    int a, b;
    cin >> a >> b;
    if (a > b)  {
        string s = "";
        int t = a / b;
        for (int i = 0; i < t; i++)
            s += '0';
        for (int i = 0; i < b; i++)
            cout<< '1'<< s;
        t = a % b;
        fl(i, t) cout << 0;
    }
    else  {
        string s = "";
        int t = b / a;
        for (int i = 0; i < t; i++) s += '1';
        for (int i = 0; i < a; i++)
            cout<<'0' << s;
        t = b % a;
        fl(i, t) cout << 1;
    }
    cout << endl;
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