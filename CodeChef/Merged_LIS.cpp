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

ll LIS(vector<ll>& a)
{
    ll n = a.size();
    vector<ll> len;
    for(ll i = 0; i < n; i++)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end()) *lb = min(*lb, a[i]);
        else len.push_back(a[i]); 
    }
    return len.size();
}


void solve(){
    ll n, m,z;
    cin >> n >> m;
    vector<ll> a, b,c;
    fl(i,n){
        cin >> z;
        a.pb(z);
    }
     fl(i,m){
        cin >> z;
        b.pb(z);
    }
    ll max1 = LIS(a);
    ll max2 = LIS(b);

        cout << max1 + max2 << endl;
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