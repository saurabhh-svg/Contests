#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    for (auto i : s)
    {
        if (i == 'L')
            x--;
        else if (i == 'R')
            x++;
        else if (i == 'U')
            y++;
        else if (i == 'D')
            y--;
        if (x == 1 && y == 1)
        {
            cout << "YES\n";
            return;
        }
    }
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