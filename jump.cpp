#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;

int main()
{
    string S;
    cin >> S;
    int n = S.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for (int j = 0; j <= n; j++)
        dp[0][j] = 1;
    for (int i = 0; i < n; i++)
    {
        if (S[i] == '+')
        {
            for (int j = 0, curr = 0; j < n - i; j++)
            {
                curr = (dp[i][j] + curr) % m;
                dp[i + 1][j] = (dp[i + 1][j] + curr) % m;
            }
        }
        else
        {
            for (int j = n - i - 1, curr = 0; j >= 0; j--)
            {
                curr = (dp[i][j + 1] + curr) % m;
                dp[i + 1][j] = (dp[i + 1][j] + curr) % m;
            }
        }
    }
  cout<<dp[n][0];
}
