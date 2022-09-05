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
    int n, x,ans=0,c=0;
    string s;
    cin >> n >> x>> s;
    vector<int> v;
    fl(i,n){
        if(s[i]=='1') ans++;
    }
    if(c[i]=='0')
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i-1]){
            v.pb(c);
            c = 0;
        }else if(s[i]==s[i-1] && s[i]=='0')
            c++;
    }
    sort(v.begin(), v.end(),greater<int>());
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if((v[i]*2)+1<=x){
            ans += v[i];
            x - (v[i] * 2 + 1);
        }
        else{
            ans += (x / 3);
            x = 0;
            break;
        }
    }

        cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }