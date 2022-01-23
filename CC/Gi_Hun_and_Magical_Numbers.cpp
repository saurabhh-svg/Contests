#include <bits/stdc++.h>
#include<unordered_map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cn(arr,n) for(int i=0;i<n;i++)cin>>arr[i]
#define ct(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;


void solve(){
    ll n, ans = 0;
    cin >> n;
    unordered_map<ll, ll> mp;
    mp[4] = 1;
    mp[9] = 1;
    mp[16] = 1;
    mp[25] = 1;
    mp[49] = 1;
    mp[64] = 1;
    mp[81] = 1;
    mp[121] = 1;

    for (ll i = 4; i <= n;i++){
        ll z = sqrt(i);
        if (i==z*z){
            if(mp[i]==1 || mp[z]==1)
                ans++;
        }
    }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }