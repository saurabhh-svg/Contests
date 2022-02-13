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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a % 1000;
    b = b % 1000;
    c = c % 1000;
    d = d % 1000;
    ll mod = 1e9 + 7;
    ll ans = (a * b * c * d) % 100;
    if(ans<10)
        cout << "0" << ans << endl;
        else
        cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _

solve();

return 0;
 }