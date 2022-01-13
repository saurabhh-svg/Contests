#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    vector<ll> v;unordered_map<ll, ll> map;
    set<ll> mp;
    v.pb(0);
    ll n, z,flag=0; cin >> n;
    fl(i, n) { cin >> z;
    v.pb(z);
    map[z]++;
    if(map[z]>1)
        flag = 1;
    }
    //if all elements are unique then always -1.
if(n<=2 || flag==0){
    cout << "-1" << endl;
return;
}

}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }