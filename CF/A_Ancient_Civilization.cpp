#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;


void solve(){
    vector<ll> v;
    ll n, l, z,ans=0;
    cin >> n >> l;
    ll pos[32]={0};
      fl(i,n){
          cin >> z;
          v.pb(z);
      }
     fl(j,n){
         fl(i,l){
           if(v[j]&(1<<i))   //if ith position pe bit 1 hai toh
            pos[i]++;
         }
     }
fl(i,l){
    if(pos[i]>(n-pos[i]))
        ans += (1 << i);
}
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