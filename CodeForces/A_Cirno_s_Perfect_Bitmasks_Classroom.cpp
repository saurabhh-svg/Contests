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
ll n,ans=0,t=1,m;cin >> n;
m = n;
bool flag = false;
while(n!=0 && !flag){
if (n % 2 == 1){
    flag = true;
    ans += t;
}t *= 2;
n /= 2;
}
if(ans==m) ans++;
if(m==1)
    ans = 3;
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