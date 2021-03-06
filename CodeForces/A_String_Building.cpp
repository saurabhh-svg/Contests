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
    string s;  cin >> s;
    int l = s.size();
    if (l < 2 || s[l - 2] != s[l - 1] || s[0] != s[1])
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1; i < l - 1; i++)
    {
        if (s[i] != s[i - 1] && s[i] != s[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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