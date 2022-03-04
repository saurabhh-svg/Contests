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
    ll n, rc = 0, bc = 0, rsum = 0, bsum = 0;
    cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    sortall(v);
    rsum += v[n - 1];
    bsum += v[0] + v[1];
    
    if (rsum > bsum)
    {
        cout << "YES" << endl;
        return;
    }
    ll start = 2, end = n - 2;
    while (start < end)
    {
        rsum += v[end];
        bsum += v[start];
        start++;
        end--;
        if (rsum > bsum)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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