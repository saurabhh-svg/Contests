#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;

void solve(){
    ll n, m,color;
    cin >> n >> m;
   map<ll, vector<ll> > x,y;
   for (int i = 1; i <= n;i++){
       for (int j = 1; j <= m;j++)   {
           cin >> color;
           x[color].pb(i);
           x[color].pb(j);
       }
    }


}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }