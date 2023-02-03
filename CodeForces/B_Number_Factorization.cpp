#include <bits/stdc++.h>
#define int long long int
using namespace std;


void solve(){
    int n,m,ans=0;
    cin >> n;
    m = n;
    unordered_map<int, int> mp;
    for (int i = 2; i* i <= n; i++) {
        int cnt = 0;
            while(n%i==0){
                cnt++;
                n /= i;
            }   mp[i] = cnt;
          n = m;
    }
    for(auto i:mp)  ans += (i.first * i.second);
    
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }

