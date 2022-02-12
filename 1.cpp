#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
#define mod 1000000007
using namespace std;

bool isperfectsq(ll n){
    ll x = (sqrt(n));
    if(x*x==n)
        return true;
    return false;
}

void solve(){
    ll n,product=1, perfectsquarecount = 0,even=0,odd=0;
    cin >> n;
    vector<ll> v;
    fl(i,n){
        ll x;
        cin >> x;
        ll pow = log(x) / log(2);
        v.pb(pow);
    }
    // if (isperfectsq(x))
    //     perfectsquarecount++;
    // ll ans = pow(2, n) - 1;
    // ans = ans % mod;
    // cout << ans << endl;
    fl(i, v.size()) {
             if(v[i]%2==0) even++;
       else odd++;
    }
    odd = odd / 2;
    
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--){
     solve();
}
 return 0;
 }