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

void solve()
{
    ll n,e=0,o=0,ans=0;
    cin >> n;
    vector<ll> v(n),vv;
    fl(i, n){
        cin >> v[i];
        if(v[i]%2==0)   e++;
        else
            o++;
    }
if(e==0 || e==n){
    cout << 0 << endl;
    return;
}
if(o%2==0){
    if(o/2<=e){
        ans = o / 2;
        cout << ans << endl;
    }else{
        cout << e << endl;
    }
}else{
    ans = e;
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