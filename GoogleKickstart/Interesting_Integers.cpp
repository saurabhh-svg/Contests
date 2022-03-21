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
pair<ll,ll> chk(ll n)
{
    ll s = 0,p=1;
    while (n > 0)
    {
        ll d = n % 10;
        s += d;
        p *= d;
        n /= 10;
    }
   pair<ll,ll> ch;
   ch.first = s;
   ch.second = p;
   return ch;
}

void solve(int t)
{
    ll l, r, ans = 0;
    cin >> l >> r;
    cout << "Case #" << t << ": ";
    for (ll i = l; i <= r; i++)
    {
       // cout << product(i) << " " << sum(i) << endl;
        if( (chk(i).second % chk(i).first) == 0)
            ans++;
    }
    cout << ans << endl;
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