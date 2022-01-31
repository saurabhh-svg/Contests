#include <bits/stdc++.h>
#include <unordered_map>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define cn(arr, n)              \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define ct(arr, n)              \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << ' ';  \
    cout << endl
using namespace std;

void solve()
{
    long double hc, dc, hm, dm, k, w, a;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    double rcm = 0, rmc = 0, r1 = 0, r11 = 0, r2 = 0, r22 = 0;

    for (int i = 0; i <= k; i++)
    {
       double h = hc + (i * a);
        double d= dc + ((k - i) * w);
        rcm = ceil(h / dm);
        rmc = ceil(hm / d);
        if (rcm >= rmc)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _
        ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}