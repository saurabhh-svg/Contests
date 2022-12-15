#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n&1){
        for (int i = 1; i <=n;i++)
            cout << "69 ";
        cout << endl;
        return;
    }
    for (int i = 0; i < n - 2;i++)
        cout << 4 << " ";

    cout << 2 << " " << 6 << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }