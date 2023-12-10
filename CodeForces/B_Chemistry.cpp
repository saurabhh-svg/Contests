#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k,pair=0,single=0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> count(26, 0);
    for (auto i : s)
        count[i - 'a']++;
        
 
    for(auto i:count){
        pair += (i / 2);
        single += (i % 2);
    }
    if (single > k + 1)
        cout << "NO\n";
    else
        cout << "YES\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }