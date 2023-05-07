#include <bits/stdc++.h>
#define int long long int
using namespace std;

// bool solve(int &n, int &m)
// {
//     if (m == n) return true;
//     for (int i = 1; i <= n / 2; i++){
//         int f = i, s = 2 * i;
//         if (f + s == n) {
//             if (f >= m){
//                 if (solve(f, m)) return true;
//             }
//             if (s >= m)  {
//                 if (solve(s, m))  return true;
//             }
//         }
//     }
//     return false;
// }

bool solve(int &n, int &m)
{
    if(n==m)
        return true;
    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        int curr = q.front(); q.pop();
        if (curr%3==0)  {
            int f = curr / 3;
            int s = 2 * f;
            if (f == m || s == m) return true;
            if(s>m) q.push(s);
            if(f>m) q.push(f);
        }
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        if (solve(n, m))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
