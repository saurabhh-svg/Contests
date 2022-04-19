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
    ll n, m, ans = 0;
    cin >> n >> m;
    if (n == m) {
        ans = 2 * (n - 1);
        cout << ans << endl;
        return;
    }
    if (abs(m - n) == 1 && (m==1 || n==1)) {
        cout << 1 << endl;
        return;
    }
    if (n == 1 || m == 1) {
        cout << "-1" << endl;
        return;
    }
   
    ll rem = abs(m - n);
    ans = 2 * (min(n, m) - 1);
    if (rem % 2 == 1) ans += 4 * (rem / 2) + 1;
    else  ans += 4 * (rem / 2);
    
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