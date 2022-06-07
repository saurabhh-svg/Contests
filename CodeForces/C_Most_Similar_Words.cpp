#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<ll>())
using namespace std;

void solve(){
    ll n, l;
    
    int ans = INT_MAX;
    cin >> n >> l;
    vector<string> s(n);
    fl(i, n) cin >>s[i];
   fl(i,n){
       fl(j,n){
          
           if(i!=j){
               int p = 0;
           fl(k, l){
               p += abs(s[i][k] - s[j][k]);
           }
           
           ans = min(p, ans);
           }
       }
   }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }