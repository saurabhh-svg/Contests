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
    ll n, sum = 0, ans = 1;
    cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    sortall(v);
    for (int i = 0; i < n; i++)
        sum += v[i];
    
    if(sum==0){
        cout << 0 << endl;
        return;
    }
    sum -= v[n - 1];
    if (sum >= v[n - 1] - 1)
        ans = 1;
    else
        ans =  v[n - 1] - sum ;
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