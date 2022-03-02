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
    ll n, sum = 0, temp = 0, ans = 0;
    cin >> n;
    vector<ll> v(n);
    fl(i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    ans = sum;
    fl(i, n)
    {
        temp = temp + v[i];
        ans = min(ans, abs((sum / 2) - temp));
    }
    if (sum % 2 == 0)  cout << (sum / 2) + ans << endl;
    

    else
    {
        temp = 0;
        ll ans1 = sum;
        fl(i, n)
        {
            temp = temp + v[i];
            ans = min(ans, abs((sum / 2) - temp + 1));
        }
        cout << min((sum / 2) + ans + 1, (sum / 2) + ans1) << endl;
    }
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