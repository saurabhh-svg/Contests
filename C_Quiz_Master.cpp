#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isPossible(vector<int> &v, map<int, vector<int>> &factors, int x, int m)
{
    for (int i = 0; i < v.size(); i++)
    {
    }

    return false;
}
void solve()
{
    int n, m, ans = 1e9;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<vector<int>> factors(n + 1);
    map<int, int> cnt;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            factors[j].push_back(i);
        }
    }
    int i = 0, j = 0;
    for (i = 0; i < n;i++){
        while(j<n && cnt.size()<m){
            for(int k:factor[v[j]])
        }
    }
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

/*
3 4 5 6 7

3-1,3
4-1,2,4
5- 1,5
6-1,2,3,6
7- 1,7
1 2 3 4 5 6 7
3 6 7

*/
