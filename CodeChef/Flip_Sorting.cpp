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
    ll n, ind = 0, flag = 0, f = 1;
    cin >> n;
    string s, s1;
    cin >> s;
    vector<pair<ll, ll> > ans;
    s1 = s;
    sort(s1.begin(), s1.end());
    if (s == s1)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            ind = i;
    }
    for (int i = ind; i >= 0; i--)
    {
        if (s[i] == '0' && f == 1)
        {
            ans.pb(make_pair(1, i + 1));
            flag = 1;
            f = 0;
        }
        else if (s[i] == '1' && flag == 1)
        {
            ans.pb(make_pair(1, i + 1));
            flag = 0;
            f = 1;
        }
    }
    cout << ans.size() << endl;
    fl(i, ans.size()) cout << ans[i].first << " " << ans[i].second << endl;
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