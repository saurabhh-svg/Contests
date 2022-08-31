#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve(int t)
{
    int r, c,count=0;
    cin >> r >> c;
    char a[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c;j++){
            cin >> a[i][j];
            if(a[i][j]=='^')
                count++;
        }
}
            cout << "Case #" << t << ": ";
            if(r==1 || c==1){
                if(count==0){
                    cout << "Possible" << endl;
                    for (int i = 0; i < r;i++){
                        for (int j = 0; j < c;j++){
                            cout << a[i][j];
                        }
                        cout << endl;
                    }
                }else{
                    cout << "Impossible\n";
                }
            }else{
                cout << "Possible" << endl;
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                        cout << '^';
                    cout << endl;
                }
            }
   
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
}