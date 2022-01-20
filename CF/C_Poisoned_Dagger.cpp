#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n, h;
    cin >> n >> h;
    ll v[n];
    fl(i, n) cin >> v[i];
    //use binary search
    ll l = 1, r = h,mid,attack=0,ans=h ;
    while(l<=r){
        mid = (l + r) / 2;
        attack = 0;
        for (ll i = 0; i < n - 1; i++)
            attack += min(mid, v[i + 1] - v[i]);
        
        attack = attack + mid; //for last index always full k
        if (attack>=h){
             ans = mid;
              r = mid - 1;
        }
            else
                l = mid + 1;
    }
    cout << ans << endl;
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }