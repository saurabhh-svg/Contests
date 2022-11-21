#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 0, anss = 0,ansss=0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    b = a;
   
    int i = 0, zero = 0, one = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        if (a[j] == 0)
            zero++;
        else
            ansss += zero;
    }
    zero = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            break;
        }
    }

    for (int j = n - 1; j >= 0; j--)
    {
        if (a[j] == 0)
            zero++;
        else
            ans += zero;
    }

    for (i = n - 1; i >= 0; i--)
    {
        if (b[i] == 1)
        {
            b[i] = 0;
            break;
        }
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (b[j] == 0)
            one++;
        else
            anss += one;
    }
    cout << max(ans, max(ansss,anss)) << endl;
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