#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;

void solve(){
    ll n,count=0;
    string s,ans="";
    cin >> n >> s;
for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
        ans += s[i];
        ans += s[i + 1];
        i++;
    }
}
cout << n - ans.size()<<endl<<ans<<endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs

solve();
return 0;
 }