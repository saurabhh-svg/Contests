#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(v[i][j]=='$') {
                if(v[i+1][j])
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}