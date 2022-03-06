#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;

void solve(){
    void solve()
    {
        ll a, b;
        cin >> a >> b;
        ll ans = b - a;

        for (ll x = b; x <= 2 * b; x++)
        {
            ll pans = x - b;
            ll newa = x | a;
            pans += 1;
            pans += abs(newa - x);
            ans = min(ans, pans);
        }

        for (ll newa = a; newa <= b; newa++)
        {
            ll pans = newa - a;
            ll na = newa | b;
            pans += 1;
            pans += abs(na - b);

            ans = min(ans, pans);
        }
        cout << ans << endl;
    }
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }