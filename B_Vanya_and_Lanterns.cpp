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
    double n, l,z,mx;
    cin >> n >> l;
    vector<double> v;
    v.pb(0);
    fl(i, n)
    {
        cin >> z;
        v.pb(z);
    }
     sort(vr(v));
     mx = v[1] - 0;

     //cout << mx << endl;
     for (int i = 2; i <= n; i++)
     {
         z = v[i] - v[i - 1];
         mx = max(z/2, mx);
     }
     z = l - v[n];
     mx = max(mx, z);
     cout << fixed << setprecision(10) << mx << endl;
}

//===========MAIN BEGIN===========

int main(){
    _ solve();
    return 0;
 }