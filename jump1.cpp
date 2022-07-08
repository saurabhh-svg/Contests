#include <bits/stdc++.h>
#define int long long int
using namespace std;

int countStrings(int n)
{
    int mod = 1e9 + 7;
    int a[n], b[n];
    a[0] = b[0] = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = (a[i - 1] % mod + b[i - 1] % mod) % mod;
        b[i] = a[i - 1] % mod;
    }
    return (a[n - 1] % mod + b[n - 1] % mod) % mod;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << countStrings(n) << endl;
    return 0;
}