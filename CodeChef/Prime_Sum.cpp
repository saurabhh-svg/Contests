#include <bits/stdc++.h>
#include<algorithm>
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
ll n,m;
cin >> n >> m;
if(n==1 || m==1){
    cout << "-1" << endl;
    return;
}
if ( __gcd(n, m) == 1)cout << 1 << endl;
else
    cout << 0 << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }