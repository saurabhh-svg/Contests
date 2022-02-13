#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

// Binary search for REAL numbers
bool satisfyEq(double m, double x)
{
        return (m*m) + sqrt(m) <= x;
}

void solve(){
    double c; cin >> c;
    double l = 0.0, h = c, m, ans = 0;
    for (int i = 0; i < 100; i++) { 
        m = (l + h) / 2;
        if (satisfyEq(m, c))l = m;
        else h = m;
    } cout << setprecision(20) << l << endl;
}
//===========MAIN BEGIN===========

int main()
{
    _ fs
    solve();
    return 0;
}