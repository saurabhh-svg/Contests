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
    ll n, ans;
    cin >> n;
    ans = n - 2;
   
    if (n % 2 == 0)
    {
        if ((n / 2) % 2 == 1)  ans =max(ans, ((n / 2) - 2) * ((n / 2) + 2) - 1);
        else  ans = max(ans, ((n / 2) - 1) * ((n / 2) + 1) - 1);
    }

    else ans = max(ans,n / 2 * (n / 2 + 1) - 1);

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