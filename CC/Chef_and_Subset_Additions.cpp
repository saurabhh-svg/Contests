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
    ll n, x, y;
    cin >> n >> x >> y;
    int a[n], b[n], c[n];
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    fl(i, n)
    {
        int p = b[i] - a[i];
        if (p == x || p == y)
            continue;
        else
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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