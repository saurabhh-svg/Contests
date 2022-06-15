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
    int n, x;
    cin >> n >> x;
    string ans = "";
    if (x == 1)
    {
        fl(i, n) cout << 'a';
        cout << endl;
        return;
    }
    if ((x > (n / 2) && n % 2 == 0) || (n % 2 == 1 && x > (n / 2 + 1))) {
        cout << -1 << endl;
        return;
    }
    if(n%2==0){
    for (int i = 0; i < x - 1; i++) ans += i + 'a';
    for (int i = 0; i < n / 2 - x+1;i++) ans += (x-1) + 'a';
    string temp = ans;
    reverse(temp.begin(), temp.end());
    ans += temp;
    }else{
        for (int i = 0; i < x - 1; i++)   ans += i + 'a';
        for (int i = 1; i <= (n / 2) - x+1 ; i++)  ans += (x - 1) + 'a';
        string temp = ans;
        ans += (x - 1) + 'a';
        reverse(temp.begin(), temp.end());
        ans += temp;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}