#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n;
    if (n % 2 == 0) {
        int x = (n * n) / 4;
        a = x + 1;
        b = x - 1;
    }
    else {
        a = floor(n * n / 2);
        b = ceil(n * n / 2);
    }
    cout << a << " " << b;
    if (n * n == (a * a) + (b * b))
        cout << a << " " << b << endl;
    else   cout << "-1\n";
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