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
    ll n,z=0,ans=0; cin>>n;
    set<int> s;
    fl(i,n){
        int x;
        cin >> x;
        s.insert(x);
        if(x==0)
            z++;
    }
   if(z==0 && s.size()==n) ans = n + 1;
       else ans = n-z;
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