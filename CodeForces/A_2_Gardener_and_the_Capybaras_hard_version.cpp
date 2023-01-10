#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size(), ind = 0;
    string a, b, c;
    if ((s[0] == 'a' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'b'))
    {
        a = s[0];
        b = s.substr(1, n - 2);
        c = s[n - 1];
    }
    else
    {
        a = s[0];
        b = s[1];
        c = s.substr(2, n - 2);
    }

    cout << a << " " << b << " " << c << endl;
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