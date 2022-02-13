#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n, x,z,sum=0,ans=0,flag=0;
    cin >> n >> x;
    vector<int> v;
    fl(i,n){
        cin >> z;
        v.pb(z);
    }
    sort(vr(v),greater<int>());
fl(i,n){
    sum += v[i];
    ans++;
    if (sum >= x){
        flag = 1;
        break;
    }
}
if(flag==1)
cout << ans << endl;
else
cout << "-1" << endl;
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }