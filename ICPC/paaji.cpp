#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353

int main()
{
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for (int j = 0; j < n; j++)
        {
            if (a[0] == b[j])
            {
                v[j][j] = 1;
            }
        }
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k + j <= n; k++)
            {
                if (v[k][j + k - 1] == 1)
                {
                    if (j + k < n)
                    {
                        if (a[j] == b[j + k]) v[k][j + k] = 1;
                    }
                    if (k - 1 >= 0)
                    {
                        if (a[j] == b[k - 1]) v[k - 1][j + k - 1] = 1;
                    }
                }
            }
        }

        bool ans = false;
        if (v[0][n - 1] == 1)
            ans = true;

        cout << "Case " << i << ": ";
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}