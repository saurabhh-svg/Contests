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
    ll n, f = 0;
    cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    if (v[0] % 2 == 0)
    {
        for (int i = 2; i < n; i = i + 2)
        {
            if (v[i] % 2 == 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    else
    {
        for (int i = 2; i < n; i = i + 2)
        {
            if (v[i] % 2 == 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (v[1] % 2 == 0)
    {
        for (int i = 1; i < n; i = i + 2)
        {
            if (v[i] % 2 == 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    else
    {
        for (int i = 1; i < n; i = i + 2)
        {
            if (v[i] % 2 == 0)
            {
                cout << "NO" << endl;
                return;
            }
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