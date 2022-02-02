#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
using namespace std;
ll check(long long n)
{ if (n == 1)
        return n;
    ll sum = 1 + n;
    for (ll j = 2; j < sqrt(n); j++){
        if (n % j == 0) {
            sum = sum + j;
            sum = sum + (n / j);
        } }
    ll sq = (ll)sqrt(n);
    if (sq * sq == n)
        sum = sum + sqrt(n);

    return sum;
}

void solve()
{
    ll x, a, b, s = 0;
    cin >> x >> a >> b;

        if (x % a != 0) cout << -1 << endl;
        else  {
            ll num = (x / a) * b;
            if (b > a && x != 1) cout << -1 << endl;
            else if (x == check(num)) cout << num << endl;
            else cout << -1 << endl;
        }
    }


//===========MAIN BEGIN===========

int main()
{
    _
        ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}