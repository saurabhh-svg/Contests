#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n,ans=0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];
    if(n==1){
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n - 1;i++){
        if(v[i]%2==v[i+1]%2){
            ans++;
        }
    }
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }