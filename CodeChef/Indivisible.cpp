#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = 99;
    while (i == a || i == b || i == c)
        i--;
    cout << i << endl;
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