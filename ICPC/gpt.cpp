#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 1; i <= t; i++){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> v(n, vector<int>(n, 0));
        cout << "Case " << i << ": ";
        for (int j = 0; j < n; j++) {
            if (a[0] == b[j]) v[j][j] = 1;
        }
        for (int j = 1; j < n; j++) {
            for (int k = 0; k + j <= n; k++) {
                if (v[k][j + k - 1] == 1)    {
                    if (j + k < n) {
                        if (a[j] == b[j + k]) v[k][j + k] = 1;
                    }
                    if (k - 1 >= 0) {
                        if (a[j] == b[k - 1])   v[k - 1][j + k - 1] = 1;
                    }
                }
            }
        }
        if (v[0][n - 1] == 1)  cout << "YES" << endl;
        else  cout << "NO" << endl;
    }

    return 0;
}