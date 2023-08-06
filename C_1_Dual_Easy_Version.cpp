#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,mx=INT_MIN,ind;
    cin >> n;
    vector<int> v(n);
    vector<pair<int,int>> ans;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if (mx < v[i])  {
            mx = max(mx, v[i]);
            ind = i + 1;
        }
    }

    for (int i = 1; i < n;i++){
        while(v[i]<v[i-1]) {
              v[i] += mx;
              ans.push_back({i + 1, ind});
              if (mx < v[i]) {
                  mx = max(mx, v[i]);
                  ind = i + 1;
              }
        }
    }
        cout << ans.size() << endl;
    for(auto i:ans)
       cout << i.first << " " << i.second << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }