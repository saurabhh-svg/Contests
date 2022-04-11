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
    ll n, x, ans = 0;
    cin >> n;
    vector<ll> a(n), b(n), aa(n), bb(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];

    fl(i, n)
    {
        aa[i] = min(a[i], b[i]);
        bb[i] = max(a[i], b[i]);
    }

    fl(i, n - 1)
    {
        ans += abs(aa[i] - aa[i + 1]);
        ans += abs(bb[i] - bb[i + 1]);
    }
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