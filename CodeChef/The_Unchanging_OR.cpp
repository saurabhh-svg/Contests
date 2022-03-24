#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

void solve()
{
    ll n, x, c = 0, st = 0;
    cin >> n;
    x = n;
    while (x > 0)
    {
        x /= 2;
        c++;
    }
    long long d = 1;
    for (ll i = 1; i < c - 1; i++)
    {
        d = d * 2;
        st = st + d - 1;
    }
    d = d * 2;
    ll ans = st + n - d;

    cout << ans << endl;
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