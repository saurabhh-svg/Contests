#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n], temp = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        temp *= a[i];
    }

    int sum = n - 1 + temp;

    sum *= 2022;
    cout << sum << endl;
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