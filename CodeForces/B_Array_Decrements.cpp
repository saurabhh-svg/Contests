#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

void solve()
{
    ll n, diff = -1;
    cin >> n;
    vector<int> a(n), b(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    bool flag1 = true,flag2 = true;
   fl(j,n) {
        if (a[j] - b[j] < 0 ) flag1 = false;
        if (b[j] != 0) flag2 = false; }
    if (flag1 && flag2){
        cout << "YES" << endl;
        return; }
    if (!flag1){
        cout << "NO" << endl;
        return; }
    fl(j,n){
        if (b[j] != 0) {
          diff = a[j] - b[j];
            break;
        }}
    fl(j,n){
        if (a[j] - b[j] != diff){
            if (a[j] - b[j] < diff&& b[j] == 0)
            {
            }
            else {
                cout << "NO\n";
                return;
            }
        }
    }  cout << "YES\n";

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