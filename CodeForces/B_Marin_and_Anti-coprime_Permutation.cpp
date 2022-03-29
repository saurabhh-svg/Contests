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
ll mod = 998244353;
ll factorial(ll n){
    return (n == 1 || n == 0) ? 1 : (n * factorial(n - 1) % mod);
}

void solve()
{

    ll n;
    cin >> n;
    if (n % 2 == 1)  {
        cout << 0 << endl;
        return;
    }
    ll ans = factorial(n / 2) % mod;
    ans = (ans * ans) % mod;
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