#include <bits/stdc++.h>
#define int long long int
using namespace std;
int solve(vector<int> &numbers, vector<int> &pattern)
{
    int res = 0, ans = 0, n = numbers.size(), m = pattern.size();
    for (int i = 1; i < n - m + 1; i++) {
        ans = 0;
        for (int j = 0; j < m; j++)  {
            if (pattern[j] == 1 && numbers[j + i] > numbers[i + j - 1])    ans++;
            else if (pattern[j] == -1 && numbers[i + j] < numbers[i + j - 1]) ans++;
            else if (pattern[j] == 0 && numbers[i + j] == numbers[i + j - 1]) ans++;
        }
       if(ans==m)
            res++;
    }
    return res;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> n, p;
    n = {4, 1, 3, 4, 4, 5, 5, 1};
    p = {1, 0, -1};
    cout << solve(n, p);
}