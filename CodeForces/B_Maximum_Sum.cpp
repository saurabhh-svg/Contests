#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n,k,ans=0;
cin >>n>>k;
vector<int> v(n),pref(n+1,0);
for (int i = 1; i <= n;i++)
    cin >> pref[i];
sort(pref.begin(), pref.end());

for (int i = 1; i <= n;i++)
    pref[i] = pref[i - 1] + pref[i];

    //if i remove x maximums from the array, 
    // then remove 2*(k-x) minimums from the array

    for (int i = 0; i <=k;i++){
    ans = max(ans, pref[n - i] - pref[2 * (k - i)]);
    }

    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }