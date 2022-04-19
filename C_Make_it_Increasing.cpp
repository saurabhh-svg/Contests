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
    ll n,mx,mn,ans=0;
    cin >> n;
    vector<ll> v(n),temp(n);
    fl(i, n) cin >> v[i];
    temp = v;
    sortall(temp);
    if(temp==v) {
        cout << n - 1 << endl;
        return;
    }
    mx = v[n - 1]; mn = v[0];
    fl(i,n){
       if(v[i]<(-mx)){
           ans += (v[i]-mn);
       }
    }
}

//===========MAIN BEGIN===========

int main(){ _ fs
solve();
return 0;
 }