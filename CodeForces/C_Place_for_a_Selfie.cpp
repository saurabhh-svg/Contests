#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n,m;
cin>>n>>m;
map<float, int> mp;
for (int i = 0; i < n; i++){
    float x; cin >> x;
    mp[1.0*x]++;
}
vector<vector<int>> ans(m);
for (int j = 0; j < m; j++)
{
    int a,b,c;
    cin >> a >> b >> c;
    if(b==0) continue;
    float p = abs(float(a * c) / b);
    for(auto i:mp){
        if(mp.find(p)!=mp.end()){
            cout << i.first << " " << p << endl;
            ans[j].push_back(p);
        }
    }
}

// for(auto i:ans){
//     if(i.size()==0)
//         cout << "NO" << endl;
//     else {
//         cout << "YES" << endl;
//         for(auto j:i)
//             cout << j << "\n";
//     }
// }
cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }