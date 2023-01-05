#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, a = 0, b = 0, c = 0;
    cin >> n;
    bool flag = false;
    for (int i = 2; i * i < n; i++){
        if (n % i == 0)   {
            a = i;
            b = n / i;
            flag = true;
            break;
        }
    }  if (flag && a != b) cout << a << " " << b << " " << 1 << endl;
    else cout << -1 << endl;
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