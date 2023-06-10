#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int m, n;
    cin >> n >> m;
    int times = n / m;
    int rem = n % m;
    while (times--)  {
        for (int i = 1; i <= m; i++)
            cout << i << " ";
    }
    for (int i = 1; i <= rem; i++)
        cout << i << " ";
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}