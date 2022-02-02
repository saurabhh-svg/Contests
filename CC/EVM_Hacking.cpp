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
using namespace std;

void solve()
{
    long double a, b, c, p, q, r;
    cin >> a >> b >> c >> p >> q >> r;
    long double t = (p + q + r) / 2;
    
    if ((a + b + r) > t || (a + q + c) > t || (c + b + p) > t)
        cout << "YES" << endl;
    else
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