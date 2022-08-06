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
    string s, t;
    cin >> s >> t;
    int ans = 0;
    bool flag = true;
    int c[26] = {0};
    for (auto i:s)  c[i - 'a']++;

    while(true){
        for (int i = 0; i < t.size();i++){
            if(c[t[i]-'a']>0)   c[t[i] - 'a']--;
            else{
                flag = false;
                break;
            }
        }
        if(!flag)
            break;
       else ans++;
    }
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
}