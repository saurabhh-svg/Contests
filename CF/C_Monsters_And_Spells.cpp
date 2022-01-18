#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

ll sum(ll n){
    return n * (n + 1) / 2;
}

void solve(){
    ll n,z,ans=0;
    cin >> n;
    vector<ll> t,h;
    fl(i, n)  {
        cin >> z;
        t.pb(z);
    }
    fl(i, n)  {
        cin >> z;
        h.pb(z);
    }
    for(int i=1;i<n;i++){
         if(t[i-1]-t[i])
    }
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }