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
    ll n, m;
    cin >> n;
    m = n;
    if (n == 3)
    {
        cout << 3 << " " << 2 << " " << 1 << endl;
        cout << 1 << " " << 3 << " " << 2 << endl;
        cout << 3 << " " << 1 << " " << 2 << endl;
        return;
    }
    vector<ll> v(n), temp(n);
    fl(i, n) v[i]=(i + 1);

    swap(v[2], v[3]);
    while (m--)
    {
        for (auto x : v)
            cout << x << " " ;
        cout << endl;
        ll t = v[n - 1];
        vector<ll> te(n);
        for (int i = 1; i < n; i++)
            te[i] = v[i - 1];
        te[0] = v[n - 1];
        v = te;
    }
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