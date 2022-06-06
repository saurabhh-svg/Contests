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
    ll n,one=0,two=0;  cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    fl(i, n) {
        cin >> v[i];
        mp[v[i]]++;
    }
    for(auto &[i,j]:mp){
       if(j==1)  one++;
       else if(j>1) two++;
    }
    // cout << one << " " << two<<endl;
    ll ans = two + (one +1 ) / 2;
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