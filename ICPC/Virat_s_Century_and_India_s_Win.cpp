#include <bits/stdc++.h>
using namespace std;
int MOD = 1000000007;

long long power(long long base, long long exponent)
{
    if (exponent == 0)
        return 1;
    long long result = power(base, exponent / 2);
    result = (result * result) % MOD;
    if (exponent % 2 == 1)
        result = (result * base) % MOD;
    return result;
}

long modInverse(long a, long m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        q = a / m;
        t = m;

        m = a % m, a = t;
        t = x0;

        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0)
        x1 += m0;

    return x1;
}

long recur(long n, long b, long w, long x, long turn, long virat, long dp[160][70][15][160][2][2])
{

    if (n <= 0 && x >= 100)
        return (double)1;
    if (n <= 0 && !virat)
        return (double)0;
    if (n <= 0)
        return (double)0;
    if (!virat && x < 100)
        return (double)0;
    if (b <= 0)
        return (double)0;
    if (w >= 10)
        return (double)0;
    if (dp[n][b][w][x][turn][virat] != 0)
        return dp[n][b][w][x][turn][virat];
    long prob = 0;
    if (turn == 0 && virat)
    {

        if (b % 6 == 5)
        {
            prob += recur(n - 1, b - 1, w, x + 1, 0, virat, dp);
            prob += recur(n - 2, b - 1, w, x + 2, 1, virat, dp);
            prob += recur(n - 3, b - 1, w, x + 3, 0, virat, dp);
            prob += recur(n - 4, b - 1, w, x + 4, 1, virat, dp);
            prob += recur(n - 6, b - 1, w, x + 6, 1, virat, dp);
            if (x >= 100 || !virat)
            {
                prob += recur(n, b - 1, w + 1, x, 1, false, dp);
            }
        }
        else
        {
            prob += recur(n - 1, b - 1, w, x + 1, 1, virat, dp);
            prob += recur(n - 2, b - 1, w, x + 2, 0, virat, dp);
            prob += recur(n - 3, b - 1, w, x + 3, 1, virat, dp);
            prob += recur(n - 4, b - 1, w, x + 4, 0, virat, dp);
            prob += recur(n - 6, b - 1, w, x + 6, 0, virat, dp);
            if (x >= 100 || !virat)
            {
                prob += recur(n, b - 1, w + 1, x, 1, false, dp);
            }
        }
    }
    else
    {
        double prob = 0;
        if (b % 6 == 5)
        {
            prob += recur(n - 1, b - 1, w, x, 1, virat, dp);
            prob += recur(n - 2, b - 1, w, x, 0, virat, dp);
            prob += recur(n - 3, b - 1, w, x, 1, virat, dp);
            prob += recur(n - 4, b - 1, w, x, 0, virat, dp);
            prob += recur(n - 6, b - 1, w, x, 0, virat, dp);

            prob += recur(n, b - 1, w + 1, x, 1, virat, dp);
        }
        else
        {
            prob += recur(n - 1, b - 1, w, x, 0, virat, dp);
            prob += recur(n - 2, b - 1, w, x, 1, virat, dp);
            prob += recur(n - 3, b - 1, w, x, 0, virat, dp);
            prob += recur(n - 4, b - 1, w, x, 1, virat, dp);
            prob += recur(n - 6, b - 1, w, x, 1, virat, dp);

            prob += recur(n, b - 1, w + 1, x, 1, virat, dp);
        }
    }
    prob = ((prob + MOD) % MOD);
    prob = prob * modInverse(6, MOD);
    prob = ((prob + MOD) % MOD);
    return dp[n][b][w][x][turn][virat] = prob;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, b, w, x;
        cin >> n >> b >> w >> x;
        long dp[160][70][15][160][2][2] = {-1};
        long ans = recur(n, b, w, x, 0, true, dp);
        cout << ans << endl;
    }
}