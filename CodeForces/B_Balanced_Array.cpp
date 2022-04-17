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
    ll n,se=0,so=0;
    cin >> n;
    vector<ll> ans;
    if (n % 4 == 2)
    {
        cout << "NO" << endl;
        return;
    }
    if(n==4){
        cout << "YES" << endl;
        cout << "2 4 1 5" << endl;
        return;
    }
    cout << "YES" << endl;
    for (ll i = 2; i <= n; i = i + 2){
        ans.pb(i);
        se += i;
    }

    ll r = n - 3;

    for (ll i = 1; i <= r; i = i + 2) {
        ans.pb(i);
        so+=i;
    }
    ll p = se - so;
   // if(p%2==1)  
    ans.pb(se - so);
    fl(i, ans.size()) cout << ans[i] << " ";
    cout << endl;
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