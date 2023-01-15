#include <bits/stdc++.h>
#define int long long int
using namespace std;
int andOperator(int a, int b)
{
    // ShiftCount variables counts till which bit every value will convert to 0
    int shiftcount = 0;
    // Iterate through every bit of a and b simultaneously
    // If a == b then we know that beyond that the and value will remain constant
    while (a != b and a > 0)
    {
        shiftcount++;
        a = a >> 1;
        b = b >> 1;
    }
    return int64_t(a << shiftcount);
}

void solve()
{
    // Increase number of operands -> AND value decreases
    int n, x, m = -1;
    cin >> n >> x;
    int lo = n, hi = 5*1e18;
    while (lo <= hi)  {
        int mid = (hi + lo) / 2;
        int temp = andOperator(n, mid);
        if (temp > x)    lo = mid + 1;
        else if (temp < x)   hi = mid - 1;
        else  {
            m = mid;
            hi = mid - 1;
        }
    }
    cout << m << endl;
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