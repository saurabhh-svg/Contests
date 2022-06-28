#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve()
{
    string s, ans = "";
    cin >> s;
    int n = s.length();
    bool caps = false;
    int i = 0;
    while (i < n)  {
        if (s[i] == 'B')    {
            if (ans.size() != 0)
                ans.pop_back();
        }
       else if (s[i] == 'C')   {
            if (caps)caps = false;
            else  caps = true;
        }
        else {
            if (caps)   ans.push_back(toupper(s[i]));
            else  ans.push_back((s[i]));
        }
        if(ans.back()=='B') {
            if(ans.size()>=2){
                ans.pop_back();
                ans.pop_back();
            }else
                ans.pop_back();
        }
        if(ans.back()=='C'){
            ans.pop_back();
            if (caps) caps = false;
            else caps = true;
        }
        i++;
    }
    cout << ans << endl;
}


signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int test;cin>>test;
    // while(test--)
    solve();
}i