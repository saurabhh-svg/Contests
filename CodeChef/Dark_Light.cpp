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
ll n,k,state=0;
cin >> n >> k;
if (n % 4 == 0){
    if (k == 0)   cout << "OFF"<<endl;
    else cout << "ON"<<endl;
}else {
    if (k == 0) cout << "On"<<endl;
    else cout << "Ambiguous"<<endl;
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