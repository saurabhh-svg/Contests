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
    ll n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    while (i < n)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
            i = i + 2;
        }
        else
        {
            ans++;
            i++;
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