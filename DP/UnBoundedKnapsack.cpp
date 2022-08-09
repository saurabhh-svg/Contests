#include<iostream>
using namespace std;

int Unbounded(int arr[], int n, int sum)
{
    int dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++) dp[i][0] = 0;
    for (int i = 1; i <= sum; i++) dp[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++)  {
            if (arr[i - 1] > j) dp[i][j] = dp[i - 1][j];
            else
      dp[i][j] = max(arr[i-1]+dp[i][j -arr[i - 1]],dp[i-1][j]);

                //dubara bhi le skte hai islie dp[i-1] ki jagah dp[i] ko call krenge 
        }
    }
    return dp[n][sum];
}