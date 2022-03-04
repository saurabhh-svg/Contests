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
set<ll> s;

void twopow(ll n){
    ll ans = 1;
    s.insert(1);
    while (ans * 2 <= n){
        ans = ans * 2;
        s.insert(ans);
}}

void fact(ll n){
    ll ans = 1,i=1;
    while(ans*i<=n){
        ans = ans * i; i++;
        s.insert(ans);
    }}


void solve(){
    ll n; cin >> n;
    if(n)
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }