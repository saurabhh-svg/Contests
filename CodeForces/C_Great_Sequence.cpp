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
    ll n, x, temp = 0, ans = 0;
    cin >> n >> x;
    vector<ll> v(n);
    map<ll, ll> mp;
    fl(i, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sortall(v);
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] > 0)
        {
            temp = v[i] * x;
            if (mp[temp] == 0)
            {
                ans++;
                mp[v[i]]--;
            }
            else
            {
                mp[temp]--;
                mp[v[i]]--;
            }
        }
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