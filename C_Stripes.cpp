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
    vector<string> v(8);
    fl(i, 8)   cin >> v[i];

    for (int i = 0; i < 8; i++){
        int r = 0, b = 0;
        for (int j = 0; j < 8; j++) {
            if(v[i][j]=='R')   r++;
            else if(v[i][j]=='B') b++;
        }
        if(r==8){
            cout << "R\n";
            return;
        }
        if (b == 8) {
            cout << "B\n";
            return;
        }
    }

    for (int i = 0; i < 8; i++) {
        int r = 0, b = 0;
        for (int j = 0; j < 8; j++)
        {
            if (v[j][i] == 'R') r++;
            else if (v[j][i] == 'B')  b++;
        }
        if (r == 8)  {
            cout << "R\n";
            return;
        }
        if (b == 8) {
            cout << "B\n";
            return;
        }
    }
    cout << '.' << endl;
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