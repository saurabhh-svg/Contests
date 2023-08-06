#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,num=-1,mx=INT_MIN,k;
    cin >> n>>k;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    map<int, int> mp;

    sort(v.begin(), v.end());

    for (int i = 1; i <= mx;i++){
        if(v[i-1]!=i){
            num = i;
            break;
        }
    }
    
    if(num==-1)  num = n + 1;

    for (int i = 0; i < n;i++){
        if(v[i]%num==0)
            mp[v[i] / num] = 1;
    }

        int ans = num * k;
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }