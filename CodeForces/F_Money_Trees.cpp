#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k,ans=0,count=0,j=0;
    cin >> n >> k;
    vector<int> v(n), h(n);
    for (int i = 0; i < n;i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> h[i];

    for (int i = 0; i < n - 1;i++){
        while (i < n - 1 && h[i + 1] % h[i] == 0 && count+v[i] <= k) {
            i++;
            count += v[i];
        }
        ans = max(ans, i - j);
        j = i-1;
        count = 0;
    }
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }