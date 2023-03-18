#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n,group1=0,group2=0;
cin >> n;
vector<int> s(n);
map<int, int> mp;
for (int i = 0; i < n;i++){
    cin >> s[i];
    mp[s[i]]++;
}
for (auto &i : mp)
{
    if(i.second>1) group2 = max(group2,i.second);
      group1 += 1;
}
cout << min(group1, group2) << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
 solve();
 }

 // 4 1 3 2
 // 