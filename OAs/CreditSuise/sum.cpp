#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
using namespace std;
void solve(){
  
    int x, y;
    cin >> x >> y;
    vector<int> v(x);
    for (int i = 0; i < x; i++)  cin >> v[i];
    cout << x + y + v[3] << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }