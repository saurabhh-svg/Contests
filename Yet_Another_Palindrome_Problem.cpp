#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0;  cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)   cin >> a[i];

    bool flag = false;

    for (int i = 0; i < n / 2; i++)  {
        if (a[i] > a[n - i - 1] || (flag && a[i] == a[n - i - 1])) {
            cout << -1 << endl;
            return;
        }
        if (a[i] < a[n - i - 1])
            flag = true;
        }

    for (int i = 0; i < n/2;i++){
        int temp = (a[n - i - 1] - a[i]);
        if(temp>ans)    ans += (temp-ans);
    } 
    
     cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0); cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }