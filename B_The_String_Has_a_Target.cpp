#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char mn = 'z';
    int ind = 0;

    for (int i = 0; i < n; i++)
    {
        if (mn >= s[i])
        {
            mn = s[i];
            ind = i;
        }
    }
    if (ind != 0)
    {
        s = mn + s;
        for (int i = ind + 1; i < n; i++)
            s[i] = s[i + 1];
    }

    for (int i = 0; i < n; i++)
        cout << s[i];
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