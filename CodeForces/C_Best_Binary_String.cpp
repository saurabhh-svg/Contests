#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] == '?') s[0] = '0';
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '?') s[i] = s[i - 1];
    }
    cout << s << endl;
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