#include <bits/stdc++.h>
#include <unordered_map>
#define int long long int
using namespace std;

void solve()
{
    string s, l, r;
    int m, prev = -1;
    cin >> s >> m >> l >> r;

    for (int i = 0; i < m; i++){
        int temp = -1;
        for (char j = l[i]; j <= r[i]; j++)
        {
            int curr = -1;
            for (int k = prev+1; k < s.size(); k++){
                if (s[k] == j){
                    curr = max(curr, k);
                    break;
                }
            }
            //  cout << j << "-" << curr << " ";
            if (curr == -1){
                cout << "YES\n";
                return;
            }
            temp = max(temp, curr);
        }
        prev = temp;
    }

    cout << "NO\n";
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