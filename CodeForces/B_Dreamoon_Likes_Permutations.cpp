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
    set<ll> l1, l2, l2, righttoleft2;
    int rem = n - mx;
    for (int i = 0; i < mx; i++) l1.insert(v[i]);
    for (int i = mx; i < n; i++)  righttoleft1.insert(v[i]);
    for (int i = 0; i < rem; i++)  lefttoright2.insert(v[i]);
    for (int i = rem; i < n; i++) righttoleft2.insert(v[i]);
    // cout << *--lefttoright1.end() << " " << *--righttoleft1.end() << " " << *--lefttoright2.end() << " " << *--righttoleft2.end() << endl;

    if (lefttoright1.size() == mx && *--lefttoright1.end() == mx &&  righttoleft1.size() == rem && *--righttoleft1.end()==rem)
        f1 = 1;

    if (lefttoright2.size() == rem && *--lefttoright2.end() == rem && righttoleft2.size() == mx && *--righttoleft2.end() == mx)
    
        f2 = 1;
    cout << f1 + f2 << endl;
    if (f1) cout << *--lefttoright1.end() << " " << *--righttoleft1.end() << endl;
    if (f2) cout << *--lefttoright2.end() << " " << *--righttoleft2.end() << endl;
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