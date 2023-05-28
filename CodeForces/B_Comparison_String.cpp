#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n,  g = 1, ans = 1;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; i++){
        if (s[i] ==s[i-1]) g++;
        else {
            ans = max(ans, g);
            g = 1;
        }
    }
    ans = max(ans, g)+1;
    
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

// < < < < < > > > < <
// 1 < 2 < 3 < 4 < 5 < 6 > 5 > 4 > 3 < 4 < 5
// 1<2>1
//1<2>1<2<3<4