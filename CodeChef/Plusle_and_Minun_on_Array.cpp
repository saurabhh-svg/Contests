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
    ll n, ans = 0, sum = 0, x;
    cin >> n;
    vector<ll> plus, minus;
    fl(i, n)
    {
        cin >> x;
        if (i % 2 == 0)
        {
            plus.pb(x);
            sum += x;
        }
        else
        {
            minus.pb(abs(x));
            sum -= abs(x);
        }
    }
    sortall(plus);
    sortall(minus);
    swap(minus[minus.size() - 1], plus[0]);
    fl(i, plus.size()) ans += plus[i];
    fl(i, minus.size()) ans -= minus[i];
    cout << max(ans, sum) << endl;
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