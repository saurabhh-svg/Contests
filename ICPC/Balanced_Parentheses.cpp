#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
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