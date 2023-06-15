#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<int> mp = {1, 10, 100, 1000, 10000};
int dp[200004][5][2];
int helper(vector<int> &v, int ind, int maxA, int canChange)
{
    if (ind < 0) return 0;

    if(dp[ind][maxA][canChange]!=-1) return dp[ind][maxA][canChange];

    int notTake = 0;
    if (maxA <= v[ind])
        notTake = mp[v[ind]] + helper(v, ind - 1, v[ind], canChange);
    else
        notTake = -mp[v[ind]] + helper(v, ind - 1, maxA, canChange);

    if (canChange) {
        for (int i = 0; i < 5; i++) {
            int take = 0;
            if (maxA <= i)    take = mp[i] + helper(v, ind - 1, i, 0);
            else take = -mp[i] + helper(v, ind - 1, maxA, 0);
            notTake = max(take, notTake);
        }
      
    }
    return dp[ind][maxA][canChange]=notTake;
}
void solve(){
    string s; cin >> s;
    int n = s.size();
    vector<int> v;
    for (auto i : s) v.push_back(i - 'A');

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            dp[i][j][0] = -1;
            dp[i][j][1] = -1;
        }
    }

    cout << helper(v, n - 1, 0, 1) << endl;
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