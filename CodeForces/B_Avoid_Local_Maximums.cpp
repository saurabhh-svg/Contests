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
    ll n, ans = 0; cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    for (ll i = 1; i < n - 1; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])    {
            if (i < n - 2) {
                if (v[i + 1] < v[i] && v[i + 1] < v[i + 2]) {
                    v[i + 1] = max(v[i+ 2], v[i]);
                    ans++;
                    i++;
                }
                else{
                    v[i] = max(v[i - 1], v[i + 1]);
                    ans++;
                }
            }
            else{
                v[i] = max(v[i - 1], v[i + 1]);
                ans++;
            }
        }
    }

    cout << ans << endl;
    fl(i, n) cout << v[i] << " ";
    cout << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test; while (test--)
        solve();
    return 0;
}