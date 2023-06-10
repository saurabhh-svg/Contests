#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

void solve(int t){
  int n,ans; cin >> n;
    ans = (n+4) / 5;
    cout << "Case #" << t << ": " << ans << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test; cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}