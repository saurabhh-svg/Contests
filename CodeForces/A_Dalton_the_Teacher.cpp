#include <bits/stdc++.h>
#define int long long int
using namespace std;



void solve(){
int n,count=0,ans=0;
cin >> n;
for (int i = 1; i <=n;i++){
    int x;
    cin >> x;
    if(x==i)
        count++;
}
ans = count / 2 + count % 2;
cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }