#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, one = 0, zero = 0,num=0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) zero++;
        else if (v[i] == 1) one++;
        else num++;
    }

  if(zero<=(n+1)/2)  cout << 0 << endl;
  else if(num==0 && one>0) cout << 2 << endl;
    else cout << 1 << endl;
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