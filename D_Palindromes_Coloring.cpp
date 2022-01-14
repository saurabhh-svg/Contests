#include <bits/stdc++.h>
#include <map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n, k,pair=0,single=0,ans=0;
    string s;
    cin >> n >> k>>s;
    map<ll, ll> mp;
    fl(i,n){
        mp[s[i]-'a']++;
    }
    fl(i,27){
        pair += mp[i] / 2;
        single += mp[i] % 2;
    }
    //cout <<"p-"<< pair << "  s-" << single << endl;
    if (n / k < 2)
    {
        cout << 1 << endl;
    return;
    }
    ans = pair / k;
    single += (pair % k)*2;
    ans = ans * 2;
    if ( single >= k)
        ans = ans + 1;
    cout << ans << endl;
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }