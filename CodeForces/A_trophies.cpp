#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, left = 0, right = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            left++;
        else
            right++;
    }
    if (left == 0 || right == 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'R')
        {
            cout << i + 1 << endl;
            return;
        }
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            cout << 0 << endl;
            return;
        }
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