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
    ll n,ans=0,flag=0;
    cin >> n;
   vector<int> x,y;
    fl(i, n)
    {
        int p, q;
        cin >> p >> q;
        x.pb(p);
        y.pb(q);
    }
fl(i,n){
    fl(j,n){
        flag = 0;
        if (x[i]==y[j]&& i!=j){
            flag = 1;
            break;
        }
    }
    if(flag==0)
        ans++;
}
        
cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){
    _ solve();
    return 0;
 }