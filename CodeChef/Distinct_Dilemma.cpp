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
    ll n, c = 0, sum = 0, temp = 0;
    cin >> n;
    vector<ll> v(n);
    fl(i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll i = 1;
    while (sum >= 0)
    {
        c++;
        sum -= i;
        i++;
    }
    c--;
    cout << c << endl;
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