#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int c = s[1] - '0';
    char r = s[0];
    for (int i = 1; i <= 8; i++)
    {
        if (i != c)
            cout << r << i << endl;
    }

    for (char i = 'a'; i <= 'h'; i++)
    {
        if (i != r)
            cout << i << c << endl;
    }
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