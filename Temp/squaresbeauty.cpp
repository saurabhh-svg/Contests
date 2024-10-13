#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the prefix sum matrix
vector<vector<int>> calculatePrefixSum(const vector<vector<int>> &grid, int N)
{
    vector<vector<int>> prefix(N + 1, vector<int>(N + 1, 0));

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            prefix[i][j] = grid[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    return prefix;
}

// Function to calculate the sum of a sub-grid
int getSubgridSum(const vector<vector<int>> &prefix, int x1, int y1, int x2, int y2)
{
    return prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
}

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> prefix = calculatePrefixSum(grid, N);

    int maxSum = INT_MIN;

    // Iterate over all possible sub-grids for the first square
    for (int x1 = 1; x1 <= N; ++x1)
    {
        for (int y1 = 1; y1 <= N; ++y1)
        {
            for (int x2 = x1; x2 <= N; ++x2)
            {
                for (int y2 = y1; y2 <= N; ++y2)
                {
                    int sum1 = getSubgridSum(prefix, x1, y1, x2, y2);

                    // Iterate over all possible sub-grids for the second square
                    for (int x3 = 1; x3 <= N; ++x3)
                    {
                        for (int y3 = 1; y3 <= N; ++y3)
                        {
                            for (int x4 = x3; x4 <= N; ++x4)
                            {
                                for (int y4 = y3; y4 <= N; ++y4)
                                {
                                    // Ensure that the sub-grids do not overlap
                                    if (x2 < x3 || x4 < x1 || y2 < y3 || y4 < y1)
                                    {
                                        int sum2 = getSubgridSum(prefix, x3, y3, x4, y4);
                                        maxSum = max(maxSum, sum1 + sum2);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << maxSum << endl;
    return 0;
}
