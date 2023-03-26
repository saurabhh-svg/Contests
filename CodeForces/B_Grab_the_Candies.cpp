#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,odd=0,even=0;
    cin >> n;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        if(x&1)
            odd += x;
        else
            even += x;
    }
    if(even>odd)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }