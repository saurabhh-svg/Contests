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

void solve(){
    string s; cin >> s;
    ll l = s.length(), ans = 0, ssize = 0;
    set<char> se;
    int a[27] = {0};
    int i = 0;
    while(i<l){
        if (s[i] == s[i + 1]) {
            i += 2;
        }
        

    }

        // for (int i = 0; i < l; i++)
        // {
        //     se.insert(s[i]);
        //     if (se.size() > ssize || a[s[i] - 'a'] == 0)
        //     {
        //         ans++;
        //         ssize = se.size();
        //         a[s[i] - 'a'] = 1;
        //     }
        //     else if (se.size() == ssize)
        //     {
        //         if (a[s[i] - 'a'] == 1)
        //         {
        //             ans--;
        //             a[s[i] - 'a'] = 0;
        //         }
        //     }
        //     // cout << i << " " << ans << endl;
        // }
    cout << ans << endl;
    //cout << endl;
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