#include <bits/stdc++.h>
#define int long long int
using namespace std;
int memo[100][100][100] = {0};
int dfs(vector<char> col, int l, int r, int k)
{
    if (l > r)
        return 0;
    if (memo[l][r][k] != 0)
        return memo[l][r][k];

    while (r > l && col[r] == col[r - 1]) {
        r--;
        k++;
    }
    memo[l][r][k] = dfs(col, l, r - 1, 0) + (k + 1) * (k + 1);
    for (int i = l; i < r; i++) {
        if (col[i] == col[r])   {
            memo[l][r][k] = max(memo[l][r][k], dfs(col, l, i, k + 1) + dfs(col, i + 1, r - 1, 0));
        }
    }
    return memo[l][r][k];
}

int solve(int n, vector<char> colors){
    return dfs(colors, 0, n - 1, 0);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<char> col(n);
    for (int i = 0; i < n; i++)
        cin >> col[i];

    int ans=solve(n, col);
    cout << ans << endl;
}