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
    ll n, k, ans = 0,c=0;
    string s;
    char x;
    cin >> n >> k >> s;
    set<char> ch;
    fl(i, k) {
        cin >> x;
        ch.insert(x);
    }
   fl(i,n){
       if(ch.find(s[i])==ch.end()){
           ans += c * (c + 1) / 2;
           c = 0;
       }else
           c++;
   }
   ans += c * (c + 1) / 2;
   cout << ans << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}