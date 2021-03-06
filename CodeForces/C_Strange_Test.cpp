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
    ll a, b, ans1 = 0, ans2 = 0, ans = 0;
    cin >> a >> b;
    ans = b - a; // b>a always

    for (int i = 0; i <= ans; i++)
    {
        if (((a + i) | b) == b)
        {
            ans1 = i + 1;
            break;
        }
    }
    for (int i = 0; i <=  b; i++)
    {
        if (((b + i) | a) == b + i)
        {
            ans2 = i + 1;
            break;
        }
    }
    ans = min(ans1, ans);
    ans = min(ans, ans2);
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