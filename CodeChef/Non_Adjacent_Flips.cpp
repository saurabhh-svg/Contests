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
    ll n, o = 0, f = 0;
    string s;
    cin >> n >> s;
    fl(i, n - 1)
    {
        if (s[i] == '1')
            f = 1;
        if (s[i] == '1' && s[i + 1] == '1')
            o++;
    }
    if (s[n - 1] == '1')
        f = 1;
    if (f == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (o > 0)
        cout << 2 << endl;
    else
        cout << 1 << endl;
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