#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int MAX = 1000;

int f[MAX] = {0};

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
    if (f[n])
        return f[n];
    int k = (n & 1) ? (n + 1) / 2 : n / 2;
    f[n] = (n & 1) ? (fib(k) * fib(k) + fib(k - 1) * fib(k - 1))
                   : (2 * fib(k - 1) + fib(k)) * fib(k);
    return f[n];
}

void solve()
{
    int n;
    cin >> n;
    if(n==0) {
        cout << 1 << endl;
        return;
    }
    cout << fib(n + 1) - 1 << endl;
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