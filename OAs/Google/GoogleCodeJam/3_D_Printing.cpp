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

void solve(ll t)
{
    ll c[3], m[3], y[3], k[3], sum = 0, mx = 1000000;
    for (int i = 0; i < 3; i++) cin >> c[i] >> m[i] >> y[i] >> k[i];
    cout << "Case #" << t << ": ";
    ll cmin = INT_MAX, mmin = INT_MAX, ymin = INT_MAX, kmin = INT_MAX;
    cmin = min(c[0], min(c[1], c[2]));
    mmin = min(m[0], min(m[1], m[2]));
    ymin = min(y[0], min(y[1], y[2]));
    kmin = min(k[0], min(k[1], k[2]));

    if (cmin + mmin + ymin + kmin < mx){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
   if(sum+cmin<=mx){
       cout << cmin << " ";
       sum += cmin;
   }else{
       cout << mx - sum<<" ";
       sum = mx;
   }
   if (sum + mmin <= mx){
       cout << mmin << " ";
       sum += mmin;
   }
   else  {
       cout << mx - sum << " ";
       sum = mx;
   }
   if (sum + ymin <= mx){
       cout << ymin << " ";
       sum += ymin;
   }
   else {
       cout << mx - sum << " ";
       sum = mx;
   }
   if (sum + kmin <= mx)
   {
       cout << kmin << " ";
       sum += kmin;
   }
   else {
       cout << mx - sum << " ";
       sum = mx;
   }

    cout << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (ll t = 1; t <= test; t++)
        solve(t);
    return 0;
}