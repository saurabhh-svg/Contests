#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve(){
    ll n, m, x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    ll color[n][m];
    // 3 colors
    if ((x1 + y1) % 2 != (x2 + y2) % 2) {
        fl(i, n)  {
            fl(j, m)   {
                if ((i + j) % 2 == (x1 + y1) % 2)
                    color[i][j] = 1;
                else
                    color[i][j] = 2;
            }
        }
    }
    // 2 colors
    else {
        fl(i, n) {
            fl(j, m){
                if ((i + j) % 2 == (x1 + y1) % 2)
                    color[i][j] = 1;
                else
                    color[i][j] = 3;
            }
        }
    }
    color[x2 - 1][y2 - 1] = 2;
    fl(i, n)  {
        fl(j, m)  {
            cout << color[i][j] << " ";
        }
        cout << endl; 
    }
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}