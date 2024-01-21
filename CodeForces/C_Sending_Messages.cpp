#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, a, f, c;
    cin >> n >> f >> a >> c;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];
    



    if(n)
    cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }