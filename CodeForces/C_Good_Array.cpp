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
    ll n, flag = 0, sum = 0;
    cin >> n;
    vector<ll> v(n), ans;
    unordered_map<ll, ll> mp;
    // vector<ll> prefsum(n), ans;
    fl(i, n)
    {
        cin >> v[i];
        sum += v[i];
        mp[v[i]]++;
    
    }
    ll mx = *max_element(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        sum -= v[i];
        --mp[v[i]];
        if (sum % 2 == 0 && sum / 2 <= mx && mp[sum / 2] > 0)
        {
            ans.push_back(i + 1);
        }
        sum += v[i];
        ++mp[v[i]];
    }
   // sortall(v);
    cout << ans.size() << endl;
    fl(i, ans.size()) cout << ans[i] << " ";
    cout << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}