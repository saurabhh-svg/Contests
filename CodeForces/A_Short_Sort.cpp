
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s;
    int c = 0;
    cin >> s;
    if (s[0] == 'a')
        c++;
    if (s[1] == 'b')
        c++;
    if (s[2] == 'c')
        c++;
    if (c > 0)
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