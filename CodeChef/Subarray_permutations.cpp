#include <bits/stdc++.h>
#include <unordered_map>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

void sol()
{
    int n, k, index = 0;
    cin >> n >> k;
    vector<int> a(n);
   // fl(i, n) a.pb(i + 1);

    if (k == 1 && n == 1)
        cout << 1 << endl;
    else if (k == 1)
        cout << -1 << endl;
    else
    {
        iota(a.begin(), a.end(), 1);
        reverse(a.end() - (n - k + 1), a.end());
        fl(i, n)
                cout << a[i] << " ";

        cout << endl;
    }
}

int main()
{
    _
        ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}