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
    ll n;
    cin >> n;
    vector<int> s(n), f(n), ans(n);
    fl(i, n) cin >> s[i];
    fl(i, n) cin >> f[i];
    ans[0] = f[0] - s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] < f[i - 1])
            ans[i] = f[i] - f[i - 1];
        else
            ans[i] = f[i] - s[i];
    }
    fl(i, n) cout << ans[i] << " ";
    cout << endl;
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