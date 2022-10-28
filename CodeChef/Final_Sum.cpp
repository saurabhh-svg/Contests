#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, q,sum=0;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        if((y-x)%2==0)
            sum++;
    }
    cout << sum << endl;
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