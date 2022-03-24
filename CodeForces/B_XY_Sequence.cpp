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
    ll n, b, x, y, sum = 0;
    cin >> n >> b >> x >> y;
    vector<ll> v(n+1);
    v[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (v[i - 1] + x <= b)
            v[i] = v[i - 1] + x;
        else
            v[i] = v[i - 1] - y;
    }
    fl(i, n + 1)
    {
       // cout << v[i] << " ";
        sum += v[i];
    }
    cout << sum << endl;
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