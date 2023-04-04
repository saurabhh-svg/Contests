#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] < (d + '0'))
        {
            string str = s.substr(i, n - i);
            string s1 = s.substr(0, i);
            cout << s1 << d << str << endl;
            return;
        }
    }
    cout << s <<d<< endl;
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