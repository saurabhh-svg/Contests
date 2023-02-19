#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
int n,m,c=0;
string a,b;
cin>>n>>m>>a>>b;

reverse(b.begin(),b.end());
a=a+b;
for(int i=1;i<a.size();i++){
    if(a[i]==a[i-1]) c++;
}
if(c>1) cout<<"NO\n";
else cout<<"YES\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }