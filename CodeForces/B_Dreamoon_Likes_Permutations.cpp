#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (ll i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n, f1 = 0, f2 = 0, ans = 0; cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    ll mx = *max_element(v.begin(), v.end());
    if(mx==n){
        cout << 0 << endl;
        return;
    }
    set<ll> l1, l2, l3, l4;
    ll rem =n- mx;
    for (ll i = 0; i < mx; i++) l1.insert(v[i]);
    for (ll i = mx; i < n; i++)  l2.insert(v[i]);
    for (ll i = 0; i < rem; i++)  l3.insert(v[i]);
    for (ll i = rem; i < n; i++) l4.insert(v[i]);
    // cout << *--lefttoright1.end() << " " << *--righttoleft1.end() << " " << *--lefttoright2.end() << " " << *--righttoleft2.end() << endl;

    if (l1.size() == mx && *--l1.end() == mx &&  l2.size() == rem && *--l2.end()==rem)
        f1 = 1;

    if (l3.size() == rem && *--l3.end() == rem && l4.size() == mx && *--l4.end() == mx)
        f2 = 1;
    if (rem == mx && f1==1 && f2==1)
    {
        cout << 1 << endl;
        cout << *--l1.end() << " " << *--l2.end() << endl;
    }
    else
    {
        cout << f1 + f2 << endl;
        if (f1) cout << *--l1.end() << " " << *--l2.end() << endl;
    if (f2) cout << *--l3.end() << " " << *--l4.end() << endl;
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