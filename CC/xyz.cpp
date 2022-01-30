#include <bits/stdc++.h>
#include <unordered_map>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define cn(arr, n)              \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define ct(arr, n)              \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << ' ';  \
    cout << endl
using namespace std;

bool check(ll mid, string &s, ll n, ll k)
{
    ll curr = 0;
    for (int i = mid - 1; i >= 0; i--)
    {
        if (k < 0) return false;
        ll val = (ll)(s[i] - '0');
        val += curr;
        val %= 10;
        k -= (10 - val) % 10;
        curr += (10 - val) % 10;
        if (k < 0) return false;

    }
    return (k >= 0);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll start = 1, e = n, ans = 0;
    while (start <= e)   {
        ll mid = start - (start - e) / 2;
        if (check(mid, s, n, k)) {
            ans = mid;
            start = mid + 1;
        }
        else e = mid - 1;
    }
    cout << ans << endl;
}
//===========MAIN BEGIN===========

int main()
{
    _
        ll test;
    cin >> test;
    while (test--)
    {
        // cout << test << "-";
        solve();
    }
    return 0;
}