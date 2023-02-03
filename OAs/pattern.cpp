#include <map>
#include <vector>
#include <iostream>
using namespace std;

int count(vector<int> &numbers, vector<int> &pattern)
{
    int count = 0;
    int n = numbers.size();
    int m = pattern.size();
    map<int, int> presum;
    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++)
    {
        int diff = i - m >= 0 ? dp[i - m] : 0;
        dp[i] = diff;
        for (int j = max(0, i - m + 1); j < i; j++)
        {
            int cur_diff = numbers[i] - numbers[j];
            if (cur_diff == 0 && pattern[i - j - 1] != 0)
            {
                break;
            }
            if (cur_diff > 0 && pattern[i - j - 1] == -1)
            {
                break;
            }
            if (cur_diff < 0 && pattern[i - j - 1] == 1)
            {
                break;
            }
            if (cur_diff == 0)
            {
                dp[i]++;
            }
            else
            {
                dp[i] += dp[j];
            }
        }
        if (i >= m - 1)
        {
            count += dp[i];
        }
    }
    return count;
}

int main()
{
    vector<int> numbers = {4, 1, 3, 4, 4, 5, 5, 1};
    vector<int> pattern = {1, 0, -1};
    int c = count(numbers, pattern);
    cout << c << endl;
    return 0;
}
