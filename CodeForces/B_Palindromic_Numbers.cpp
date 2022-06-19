#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

bool ispalin(int n){
    string s = "";
    while (n > 0) {
        s += (n%10)+'0';
        n /= 10;
    }
    int i = 0, j = s.length() - 1;
    while (i < j)   {
        if (s[i] != s[j]) return false;
        i++;  j--;
    }
    return true;
}
void solve(){
    int n,c=0; cin >> n;
    string s,ans="";  cin >> s;
     if(s[0]=='9'){
         for (int i = n - 1; i >= 0;i--){
             int d = s[i] - '0' + c;
             if(d<=1){
                 c = 0;   ans += '0' + 1 - d;
             }else{
                 c = 1; ans += '0' + 11 - d;
             }
         } reverse(ans.begin(), ans.end());
         cout << ans << endl; return;
     }
     fl(i, n) cout << (9 - (s[i] - '0'));
     cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)    solve();
}