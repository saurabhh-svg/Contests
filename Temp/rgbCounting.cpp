#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int countGoodColorings(int N, int K, vector<int> &A)
{
    vector<vector<vector<vector<int>>>> dp(N + 1, vector<vector<vector<int>>>(K, vector<vector<int>>(K, vector<int>(K, 0))));

    // Base case: Empty array, one way to color it (do nothing)
    dp[0][0][0][0] = 1;

    for (int i = 0; i < N; ++i)
    {
        int num = A[i] % K;

        for (int r = 0; r < K; ++r)
        {
            for (int b = 0; b < K; ++b)
            {
                for (int g = 0; g < K; ++g)
                {
                    if (dp[i][r][b][g] == 0)
                        continue;

                    // Color current element as RED
                    int newR = (r + num) % K;
                    dp[i + 1][newR][b][g] = (dp[i + 1][newR][b][g] + dp[i][r][b][g]) % MOD;

                    // Color current element as BLUE
                    int newB = (b + num) % K;
                    dp[i + 1][r][newB][g] = (dp[i + 1][r][newB][g] + dp[i][r][b][g]) % MOD;

                    // Color current element as GREEN
                    int newG = (g + num) % K;
                    dp[i + 1][r][b][newG] = (dp[i + 1][r][b][newG] + dp[i][r][b][g]) % MOD;
                }
            }
        }
    }

    // Count valid configurations
    int result = 0;

    for (int r = 0; r < K; ++r)
    {
        for (int b = 0; b < K; ++b)
        {
            int g1 = (r + b) % K;
            int g2 = (K + r - b) % K;

            if (g1 == g2)
            {
                result = (result + dp[N][r][b][g1]) % MOD;
            }
            else
            {
                result = (result + dp[N][r][b][g1] + dp[N][r][b][g2]) % MOD;
            }
        }
    }

    return result;
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    cout << countGoodColorings(N, K, A) << endl;

    return 0;
}
