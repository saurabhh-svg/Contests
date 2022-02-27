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
ll mod = 1e9 + 7, ans = 0;
ll factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1) % mod;
}

void solve()
{
    int n, f = 0;
    cin >> n;
    vector<int> a(n);
    fl(i, n) cin >> a[i];
    int min1 = *min_element(a.begin(), a.end());
    fl(i, n)
    {
        if (a[i] == min1)
            f++;
    }
    fl(i, n)
    {
        if (((min1 & a[i]) != min1) || f < 2)
        {
            cout << "0" << endl;
            return;
        }
    }
  
    // fC2 * 2 = f(f-1)
    //  f(f-1)c* (n-2)!
    ll fact = factorial(n - 2) % mod;
   ll pos = f * (f - 1) % mod;
    ans = fact * pos  % mod;
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