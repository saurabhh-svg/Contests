#include <bits/stdc++.h>
#define int long long int
using namespace std;
int pow(int x)
{
    int t = 1;
    while (t <= x)
    {
        t *= 2;
    }
    return t;
}

void solve()
{
    int n, mn = INT_MAX;
    cin >> n;
    cout << n << endl;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cout << i << " " << pow(x) - x << endl;
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