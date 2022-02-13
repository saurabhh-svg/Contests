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

void solve(){
    ll c, a = 0, b = 0;
    cin >> c;
    ll msb = 0, flag = 1;
    for (int i = 31; i >= 0; i--) {
        if ((1 << i) & c)  {
            msb = i;
            break;
        }
    }
    // cout << msb << endl;
    for (int i = msb; i >= 0; i--) {
        if ((1 << i) & c)   {
            if (flag == 1) {
                a |= (1 << i);
                flag = 0;
            }
            else b |= (1 << i);
        }
        else {
            a |= (1 << i);
            b |= (1 << i);
        }
    }
    cout << a * b << endl;
}

//===========MAIN BEGIN===========

int main(){
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}