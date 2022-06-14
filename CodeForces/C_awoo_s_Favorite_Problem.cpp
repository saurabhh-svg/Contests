#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

void solve(){
    ll n; cin >> n;
    string s, t,ss="",tt="";  cin >> s >> t;
    vector<int> sa, sc, ta, tc;
fl(i,n){
    if (s[i] != 'b')
        ss += s[i];
    if(t[i]!='b')
        tt += t[i];
}
if(ss!=tt){
    cout << "NO\n";
    return;
}
        // a moves right -> index of a in t >= index of a in s 
        //  c moves left -> index of c in t <= index of c in s
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') sa.pb(i);
            if (s[i] == 'c') sc.pb(i);
            if (t[i] == 'a') ta.pb(i);
            if (t[i] == 'c') tc.pb(i);
        }
        for (int i = 0; i < sa.size(); i++)  {
            if (sa[i] > ta[i]){
                cout << "NO\n";
                return;
            }
        }
        for (int i = 0; i < sc.size(); i++) {
            if (sc[i] < tc[i])  {
                cout << "NO\n";
                return;
            }
        }

    cout << "YES\n";
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test;cin>>test;
while(test--)
    solve();
return 0;
 }