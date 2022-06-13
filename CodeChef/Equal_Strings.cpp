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
    ll n, ans = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int aa[27] = {0};
    fl(i, n)
    {
        if (a[i] != b[i] && aa[b[i] - 'a'] == 0)
        {
           // cout << a[i] << ans << endl;
            ans++;
            aa[b[i] - 'a'] = 1;
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