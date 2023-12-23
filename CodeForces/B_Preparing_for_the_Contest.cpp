#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    for (int i = n - k; i <=n;i++)
        cout << i << " ";
    for (int i = n - k-1; i >= 1;i--)
        cout << i << " ";
    cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }