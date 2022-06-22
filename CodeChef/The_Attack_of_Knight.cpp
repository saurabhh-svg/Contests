#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;



bool doesAttack(int x3, int y3, int x4, int y4)
{
    if ((abs(x3 - x4) == 1) && (abs(y3 - y4) == 2))
        return true;
    if ((abs(x3 - x4) == 2) && (abs(y3 - y4) == 1))
        return true;
    return false;
}

void solve()
{
    int x1, y1, y2, x2;
    cin >> x1 >> y1 >> x2 >> y2;

    int found = 0;
    for (int i = 1; i <= 8; i++)
    {
        if (found == 1) break;
        for (int j = 1; j <= 8; j++)
        {
            if (((i == x1) && (j == y1)) || ((i == x2) && (j == y2)))
                continue;

            // (i, j) is now a cell where we can place the knight.

            if (doesAttack(x1, y1, i, j) && doesAttack(x2, y2, i, j))
            {
                found = 1;
                break;
            }
        }
    }

    if (found == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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