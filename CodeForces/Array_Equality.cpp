#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    fl(i, n){
        cin >> v[i];
        m[v[i]]++;
    } 
    priority_queue<int> q;
    q.push(0);
    for (auto i : m){
        q.push(i.second);
        //cout << i.second << " ";
    }
   // cout << q.size();
    while (q.size() > 2)  {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        x--;
        y--;
        if (x > 0)
            q.push(x);
        if (y > 0)
            q.push(y);
    }
        int x = q.top();   q.pop();
        int y = q.top();   q.pop();
        if (x - y > 1)  cout << "No\n";
        else  cout << "Yes\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }