#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n&1){
        for (int i = 1; i <= n;i++)
            cout << i << " ";
    }else{
        int c = 2;
        while(n--){
            cout << c << " ";
            c += 2;
        }
    }
    cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }