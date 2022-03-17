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
    ll n, k, index = 0, flag = 0, ans = 0;
    double sum = 0;
    cin >> n >> k;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    sortall(v);
    fl(i, n)
    {
        if (sum + v[i] >= k)
        {
            flag = 1;
            index = i;
            break;
        }
        else
        {
            ans++;
            sum += v[i];
        }
    }
    if (flag)
    {
        double temp = ceil((double)v[index] / 2);
        sum += temp;
        if (sum <= k)
            ans++;
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