#include <bits/stdc++.h>
#define int long long int
using namespace std;

int solve(vector<int> &A)
{
    int n = A.size(), ans, i = 0, j = n - 1, mod = 1e9 + 7;
    int fSum = A[0], sSum = A[n - 1], tSum = INT_MIN;
    bool flag = false;
    // perfix maximum sum
    for (i = 1; i < n; i++)
    {
        if (fSum + A[i] >= fSum)
            fSum += A[i];
        else
            break;
        //  fSum%=mod;
    }
    if (i >= n - 1)
        return fSum;
    // suffix postive sum
    for (j = n - 2; j >= i; j--)
    {
        if (sSum + A[j] >= sSum)
            sSum += A[j];
        else
            break;
        // sSum%=mod;
    }
    int s = 0;
    if (i > 1 || j < n - 2)
        flag = true;
    // middle one maximum suubarray sum
    for (int k = i; k <= j; k++)
    {
        s += A[k];
        tSum = max(tSum, s);
        if (s <= 0)
            s = 0;
        // tSum%=mod;
    }
    cout << fSum << " " << tSum << " " << sSum << " ";
    if (tSum < 0 && flag)
        tSum = 0;

    ans = fSum + sSum + tSum;
    ans = ans % mod;

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    vector<int> v(test);
    for (int i = 0; i < test; i++)
        cin >> v[i];
    cout << solve(v);
}