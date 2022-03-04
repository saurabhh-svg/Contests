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
    cin >> n >> m;
    set<ll> s;
    ll mex = max(n, m);
    ll mn = min(n, m);
    ll mx = pow(n, m);

    for (int i = 1; i <= mex; i++)
    {
        ll j = 1;
        while (j <= mn)
        {
            ll temp = pow(i, j);
            j++;
            s.insert(temp);
        }
    }
    ll ans = s.size();
    s.clear();
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}