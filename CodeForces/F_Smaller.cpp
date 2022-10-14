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
    int n;
    cin >> n;
    // 2 means at end of t  // 1 means at end of s
    string x, t = "a", s = "a";
    int ls = 1, lt = 1;
    char largestS = 'a', largestT = 'a', smallestS = 'a', smallestT = 'a';

    while (n--)
    {
        int d, k;
        cin >> d >> k >> x;
        if (d == 2)
        {
            for (int i = 0; i < x.length(); i++)
            {
                if (x[i] > largestT)
                    largestT = x[i];
            }
            lt += (k * x.length());
        }
        else
        {
            for (int i = 0; i < x.length(); i++)
            {
                if (x[i] > largestS)
                    largestS = x[i];
            }
            ls += (k * x.length());
        }
        if(largestT>smallestS)
            cout << "YES\n";
            else {
                if(largestS==largestT){
                    //all characters are a
                    if(ls<lt) cout << "YES\n";
                        else
                            cout << "NO\n";
                }else
                    cout << "NO\n";
            }
    }
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