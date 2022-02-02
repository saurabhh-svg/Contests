#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
void solve()
{
    ll n;

    string s;
    cin >> n >> s;
    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    sort(s.begin(), s.end());
    int a[27] = {0};
    fr(i, n) a[s[i] - 'a']++;

    fr(i, 27)
    {
        if (a[i] > n / 2)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    fr(i, n / 2) cout << s[i];
    for (int i = n - 1; i >= n / 2; i--)
        cout << s[i];

    cout << endl;
}
int main()
{
   ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}