#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        s.insert(x);
    }
    int ans = s.size();
    int l = 0, r = n;
    for (int i = 0; i < n; i++) {
      
    }
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }