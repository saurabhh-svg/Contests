#include <bits/stdc++.h>
#define int long long int
using namespace std;
int andOperator(int x, int y)
{
    // Iterate over all bits of y, starting from the lsb, if it's equal to 1, flip it
    for (int i = 0; i < (int)log2(y) + 1; i++) {
        // repeat till x >= y, otherwise return the answer.
        if (y <= x)     return y;
        if (y & (1 << i))
            y &= ~(1UL << i);
    }  return y;
}
int msbPos(int n){
    int msb_p = -1;
    while (n) {
        n = n >> 1;
        msb_p++;
    } return msb_p;
}

void solve(){
    int n, x, m = INT_MAX;
    cin >> n >> x;
    if (n == x)   m = n;
    if (msbPos(x) > msbPos(n))  {
        cout << -1 << endl;
        return;
    }
    for (int i = n + 1; i < n+1e6; i++)  {
        int p = andOperator(n, i);
        m = min(m, p | x);
    }  cout << m << endl;
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