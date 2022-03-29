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
    ll n, ans = 0, cnt = 0, index = 0;
    string s;
    cin >> n >> s;
    ll i = 0;
    while (i < n-1 )
    {
        if (s[i] == '(' || (s[i] == ')' && s[i + 1] == ')')) i += 2;
            else {
                int r = i + 1;
                while (r < n && s[r] != ')') r++;
                if (r == n) break;
                i = r + 1;
            }
            cnt++;
        }
    cout << cnt << ' ' << n - i << '\n';
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