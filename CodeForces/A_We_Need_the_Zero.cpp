#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i <= 256; i++)  {
        vector<int> b(a);

        int temp = 0;

        for (int j = 0; j < n; j++){
            b[j] = b[j] ^ i;
            temp ^= b[j];
        }  
        if (temp == 0){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }