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
    ll n,z,ans=0;
    cin>>n;
    vector<int> v;
     map<int, int> mp;
    v.pb(0);
    fl(i, n) {
        cin >> z;
        v.pb(z);
    }
    for (int i = 1; i <= n;i++){
        int x = v[i] - i;
        mp[x]++;
    
        if(mp[x]>=2)
            ans = ans + mp[x] - 1;
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