#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,ans=0;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for(auto i:s)
        mp[i]++;
    for (auto i:mp){
        int c = i.first - 'A' + 1;
        int count = i.second;
        if(c<=count) ans++;
    }
        cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }