#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k;
    cin >> n>>k;
    vector<int> ans(n);
    priority_queue<pair<int, int>> a;
    priority_queue<int> b;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }

    while(!a.empty()){
        int ind = a.top().second;
        int curr = a.top().first;
        int air=b.top();
        a.pop();b.pop();
        ans[ind] = air;
    }
    for (int i = 0; i < n;i++)
        cout << ans[i] << " ";
    cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }