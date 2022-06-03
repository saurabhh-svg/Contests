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

void solve(){
    ll n,odd=0,ans=0,temp=INT_MAX;
    cin >> n;
    vector<int> v(n),e;
    fl(i, n) {
        cin >> v[i];
    if(v[i]%2==1) odd++;
        else e.pb(v[i]);
    }

if(odd==n){
    cout << 0 << endl;
    return;
}
if(odd>0) ans = n - odd;
else {
    for (int i = 0; i < e.size();i++){
        ll c = 0;
        while(e[i]%2!=1){
            e[i] /= 2;
            c++;
        }
        temp = min(temp, c);
    }
    ans = temp + (e.size() - 1);
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