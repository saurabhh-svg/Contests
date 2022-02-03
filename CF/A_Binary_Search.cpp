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
    ll n, k, f = 0;
    cin >> n >> k;
    ll a[n], q[k];
    fl(i, n) cin >> a[i];
    fl(i, k) cin >> q[i];
    int mn = a[0], mx = a[n - 1];
    for (int i = 0; i < k; i++)
    {
        if (q[i] > mx) cout << n + 1 << endl;
        else
        {
            int low = -1, high = n , mid;
            while (low +1< high)
            {
                mid = (low + high) / 2;
                if (a[mid] < q[i])
                    low = mid;
                else
                    high = mid;
            }
            cout << high+1 << endl;
        }
    }
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
    solve();
    return 0;
}