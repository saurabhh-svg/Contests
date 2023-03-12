#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k, ans = 0;
    string s;
    cin >> n >> k >> s;
    priority_queue<int> pq; //sum,lowercase
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[s[i]]++;
    }
    for (char i='a'; i <='z';i++){
        if(mp.find(i)!=mp.end() || mp.find(toupper(i))!=mp.end()){
            ans+=min(mp[i],mp[toupper(i)]);
            pq.push(abs(mp[i] - mp[toupper(i)]));
        }
    }
    while(!pq.empty() && k>0){
        int diff = pq.top();
        pq.pop();
        int temp = min(diff / 2, k);
        k -= temp;
        ans += temp;
        if(k==0)
            break;
    }
        cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }