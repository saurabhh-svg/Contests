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
    ll n, k, ans = 0,x;
    cin >> n >> k;
    vector<ll>  prefix(n+1,0);
    for (int i = 1; i <= n;i++){
        cin >> x;
        prefix[i] = x + prefix[i - 1];
    }
    if(k<=n){
        for (int i = k; i <=n;i++){
            ll temp = prefix[i] + (k - 1) * k / 2 - prefix[i-k];
            ans = max(temp, ans);
        }
    }else
        ans = k * n - n * (n + 1) / 2 + prefix[n];
    //cout << prefix[n] << endl;
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