#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve(int t)
{

    string s, p;
    cin >> s >> p;

    ll l1 = s.length();
    ll l2 = p.length();
    cout << "Case #" << t << ": ";
    vector<ll> v;
    ll ans = 0, c = 0;
    fl(i, l2)
    {
        if (s[c] == p[i])
        {
            v.pb(p[i]);
            c++;
        }
    }
    if (v.size() == l1)
    {
        ans = p.size() - l1;
        cout << ans << endl;
    }
    else
        cout << "IMPOSSIBLE" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}