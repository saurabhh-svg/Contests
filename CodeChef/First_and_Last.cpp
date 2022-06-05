#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<ll>())
using namespace std;

void solve(){
    ll n,ans=INT_MIN;
    cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    ans = v[0] + v[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, (v[i] + v[i + 1]));
    }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }