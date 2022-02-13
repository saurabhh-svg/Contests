#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n], count = 0,ans=0;
    fl(i, n) cin >> a[i];
    vector<bool> istaken(n, false);
    // Maximum 32 bit is binary representation
    // Iterating from Left to right to check for set bits
    // counting pairs using n(n-1)/2

    for (int i = 31; i >= 0; i--)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if ((a[j] & (1 << i)) && (istaken[j] == false)){
                count++;
            istaken[j] = true;
            }
        }
        ans += count * (count - 1) / 2;
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