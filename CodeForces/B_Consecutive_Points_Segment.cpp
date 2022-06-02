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
    ll n, diff = 0;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    sortall(v);
    for (int i = 1; i < n; i++)
        diff += v[i] - v[i - 1] - 1;

    if (diff >= 3)
        cout << "NO" << endl;
    else
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