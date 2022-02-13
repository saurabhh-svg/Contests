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
    ll x, y, ans = 0, c = 0;

    cin >> x >> y;
    c = x - y;
    if(x==y){
        cout << (y * 2) - 1 << endl;
        return;
    }
    ans = (y*2) + c;
    cout << ans << endl;
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