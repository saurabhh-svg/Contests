#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<ll>())
using namespace std;
ll sum(ll n){
    ll s=0;
    while (n > 0) {
        s += (n % 10);
        n /= 10;
    }return s;
}

void solve(){
    ll n, s,ans=0,diff=0,p=1;
    cin >> n >> s;
    if(sum(n)<=s){
        cout << 0 << endl;
        return;
    }
    // always try to make the last digit 0
    for (int i = 0; i < 18; ++i)
    {
        ll d = (n/p) % 10;
        diff = (10 - d)*p;
        n += diff;  ans += diff;
        if (sum(n) <= s)  break;
        p *= 10;
    }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }