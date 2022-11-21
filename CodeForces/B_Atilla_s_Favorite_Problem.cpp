#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    char mx = 'a', c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c > mx)
            mx = c;
    }
    cout << (mx - 'a') + 1 << endl;
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