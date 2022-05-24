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
    ll n, ans = 0,even=-1,odd=-1;
    cin >> n;
    vector<ll> v(n),o,e;
    fl(i, n) {
        cin >> v[i];
if(v[i]%2==0) {
    v[i] = 1;
    e.pb(i);
}
else {
    v[i] = 0;
    o.pb(i);
}
    }
    fl(i,n){
        if(v[i]==1)
            odd = 1;
        else
            even = 1;
    }
    if(even!=odd){
        cout << n-1 << endl;
        return;
    }
    ll i = 0,st=0;
    while(i<n){
        if(v[st]==0) {

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