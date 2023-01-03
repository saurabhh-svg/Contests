#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
            cout << "-5 5 ";
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
            cout << 1 - (n / 2) << " "  << n / 2 << " ";
        cout << 1 - (n / 2);
    }
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