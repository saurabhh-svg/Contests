#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
for (int i = 0; i < n;i++){
    for (int j = i + 1; j < n;j++){
        if(__gcd(a[i],a[j])<=2){
            cout << "Yes\n";
            return;
        }
    }
}
cout << "No\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }