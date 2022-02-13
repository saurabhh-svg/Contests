#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n, m,mx=0;
    cin >> n >> m;
    ll d1 = 0, d2 = 0, d3 = 0, d4 = 0,z=0;
    vector<ll> v;
    // let us consider it as a 1-D array
    //  tina sits on corners (1,1),(1,m)
    //  rahul try to sit near the middle
    fl(i,n){
        fl(j,m){
            d1 = i + j; //distance from corner 1
            d2 = (n - i-1) + j;
            d3 = i + (m - j-1);
            d4=(n - i-1) + (m - j-1);
            z = max(d1, max(d2, max(d3, d4)));
            v.pb(z); // max distance from any corner
        }
    }
    sort(vr(v));
    fl(i, n * m) cout << v[i] << " ";
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }