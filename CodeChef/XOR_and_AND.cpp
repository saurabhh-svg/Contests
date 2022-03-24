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

unsigned countBits(unsigned int number)
{
    return (int)log2(number) + 1;
}
void solve()
{
    ll n, x, ans = 0, temp = 1;
    cin >> n;
    vector<ll> v(n);
    fl(i, n)
    {
        cin >> x;
        v[i] = log2(x);
    }
    sortall(v);
    fl(i, n)
    {
        if (v[i] == v[i + 1])
        {
            temp++;
        }
        else
        {
            ans += (temp * (temp - 1)) / 2;
            temp = 1;
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