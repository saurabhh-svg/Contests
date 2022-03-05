#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n, ans = 0, z = 0;
    cin >> n;
    vector<ll> v(n), temp(n);
    unordered_map<ll, ll> mp;
    fl(i, n)
    {
        cin >> v[i];
        if (v[i] != 0)
            ans++;
        else
            z++;
    }

    cout << max(z, ans) << endl;
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