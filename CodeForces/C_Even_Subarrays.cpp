#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 0;
    cin >> n;
    int a[n], preXOR[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ans = n * (n + 1) / 2;
    preXOR[0] = a[0];
    for (int i = 1; i < n; i++)
        preXOR[i] = preXOR[i - 1] ^ a[i];

    vector<int> count(2 * n + 1, 0);
    count[0] = 1;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j * j <= 2 * n; j++)
        {
            if (((j * j) ^ preXOR[i]) <= 2 * n)
                ans -= count[(j * j) ^ preXOR[i]];
        }
      
        count[preXOR[i]]++;
    }
    cout << ans << endl;
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