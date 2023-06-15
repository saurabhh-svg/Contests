#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int q;
    cin >> q;
    int prev = -1, first = -1, second = -1;
    string ans = "";
    while (q--)
    {
        int n;
        cin >> n;
        if (first == -1)
            first = n;
        if (n >= prev && second == -1)
        {
            prev = n;
            ans += '1';
        }
        else if (n >= second && n <= first)
        {
            ans += "1";
            second = n;
        }
        else
        {
            ans += "0";
        }
    }
    cout << ans << endl;
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