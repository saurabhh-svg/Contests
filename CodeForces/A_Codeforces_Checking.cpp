#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    char c;
    cin >> c;
    string s = "codeforces";
    for (auto i : s)
    {
        if (c == i)
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