#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> s(n), u(n);
    for (int i = 0; i < n;i++){
        cin >> s[i];
        s[i] -= 1;
    }
    for (int i = 0; i < n; i++) cin >> u[i];

    vector<vector<int>> bst(n);

    for (int i = 0; i < n;i++){
        bst[s[i]].push_back(u[i]);
    }
    for (int i = 0; i < n;i++) 
     sort(bst[i].begin(), bst[i].end(), greater<int>());

    vector<vector<int>> pref(n, vector<int>(1, 0));
    vector<int> ans(n);

    for (int i = 0; i < n;i++){
        for(int x:bst[i]){
            pref[i].push_back(pref[i].back() + x);
        }
    }

    for (int i = 0; i < n;i++){
        for (int k = 1; k <= bst[i].size();++k){
            ans[k - 1] += pref[i][bst[i].size() / k * k];
        }
    }

        for (auto i : ans)
            cout << i << " ";
    cout << "\n";
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