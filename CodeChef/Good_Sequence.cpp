#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
int n;
cin >> n;
int a[n];
vector<int> oneCount(n+1, 0),ans;
map<int, int> mp;
for (int i = 0; i < n; i++)
    cin >> a[i];

if(a[0]==1)  oneCount[0] = 1;
for (int i = 1; i < n;i++) oneCount[i] = oneCount[i - 1] + (a[i] == 1);
for (int i = 0; i < n;i++){
    for (int j = i + 1; j < n;j++){
        if(j-i==oneCount[j]-oneCount[i] && mp.find(i)==mp.end() && mp.find(j)==mp.end()) {
            ans.push_back(i+1);
            ans.push_back(j+1);
            mp[i]++; mp[j]++;
        }
    }
}
cout << ans.size() << endl;
for (auto i : ans)
    cout << i << " ";
cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }