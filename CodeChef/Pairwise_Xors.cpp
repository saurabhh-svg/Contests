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
    ll x;
    cin >> x;
    if (x & 1 || (ceil(log2(x)) == floor(log2(x))))
    {
        cout << "-1" << endl;
        return;
    }
    // a = x/2 b =0 c= rightmost bit of a
    ll a = x / 2;
    ll c = a << 0;

    cout << a << " " << 0 << " " << c << endl;
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