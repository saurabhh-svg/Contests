#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll i, j, n, s = 0, k, f = 0;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (int len = 1; len <= n; len++)
    {
        for (i = 0, j = len - 1; j < n; j++, i++)
        {
            int f = 0;
            for (k = i; k <= j; k++)
                if (a[k] == 0)
                    f++;
            s += len;
            s += f;
        }
    }
    cout << s << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}