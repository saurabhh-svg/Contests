#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int m1, m2, p1, p2;
    cin >> m1 >> p1 >> m2 >> p2;
    int min = INT_MAX;

    for (int i = 0; m1 * i <= n; i++){
        int rem = n - i * m1;
        if (rem % m2 == 0)    {
            int cost = p1 * i + p2 * (rem / m2);
            min = (cost < min || min == -1) ? cost : min;
        }
    }
        cout << min << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}