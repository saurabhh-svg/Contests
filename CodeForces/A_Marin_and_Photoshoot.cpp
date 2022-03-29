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
    ll n,o=0,z=0, ans = 0;
    cin >> n; string s; cin >> s;
   fl(i,n){
         if(i<n-1){
             if(s[i]=='0' && s[i+1]=='0')
                 ans += 2;
         }
         if(i>0){
         if(s[i]=='1' && s[i+1]=='0' && s[i-1]=='0')
             ans++;
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