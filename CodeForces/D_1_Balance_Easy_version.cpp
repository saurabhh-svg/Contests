#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
void solve()
{
    int q;
    cin >> q;
    map<int, int> m;
    set<int> s;
    while (q--)
    {
        char c;
        cin >> c;
        int temp;
        cin >> temp;
        if (c == '+')
            s.insert(temp);
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}