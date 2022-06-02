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
    int n, k; cin >> n >> k;
    string s;cin >> s;
    if (s == string(n, '0')){
        cout << 0 << '\n';
        return;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)  cnt += (s[i] == '1');
    
    int ans = 11 * cnt;
    int L = 0, R = n - 1;
    while (s[L] == '0') L++;
    while (s[R] == '0') R--;
    R = n - 1 - R;
    if (cnt == 1){
        if (R <= k) ans -= 10;  
        else  if (L <= k) ans -= 1; 
    }else{
        if (L + R <= k)  ans -= 11;
        else if (R <= k) ans -= 10;
            else if (L <= k) ans -= 1;     
            
        }
        cout << ans << '\n';
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