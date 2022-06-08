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
    ll n;cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    ll mx = INT32_MIN, mn = INT32_MAX;
    fl(i, n)  {
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
        if (v[i] != mx && v[i] != mn)  {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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