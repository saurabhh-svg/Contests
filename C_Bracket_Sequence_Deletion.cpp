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
bool ispalin(string s, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        if (s[i] != s[r - i + 1])
            return false;
    }
    return true;
}

void solve()
{
    ll n, ans = 0, cnt = 0, index = 0;
    string s;
    cin >> n >> s;
    cnt = s.length();
    int i = 0;
    bool flag = false;
    while (i < n)
    {
        if (s[i] == '(' && s[i + 1] == ')')
        {
            ans++;
            cnt -= 2;
            i = i + 2;
            flag = true;
        }
        else
        {
            index = i;
            break;
        }
    }
    i = index + 1;
    if (flag)
    {
        while (i < n)
        {
            i = index + 1;
            if (ispalin(s, index, i))
            {
                ans++;
                index = i + 1;
            }
            i++;
        }
    }
    cout << ans << " " << cnt << endl;
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