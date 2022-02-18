#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;

void solve(){
    ll n,odd=0,even=0,ans=0,x;
    cin >> n;
    vector<int> o,e;
    unordered_map<int, bool> mp;
    fl(i, n){
        cin >> x;
        if(x%2==0){
            even++;
            mp[i] = true;
        }
            else{
                odd++;
                mp[i] = false;
            }
    }
    if(n==1){
        cout << 0 << endl;
        return; 
    }
    if(abs(odd-even)>1){
        cout << -1 << endl;
        return;
    }
    if(odd==even){
        int ans1 = 0, ans2 = 0;
        // lets consider 1st element to be even
        for (int i = 0; i < n; i=i+2) {
            if(mp[i]==false) e.pb(i);
        }
        for (int i = 1; i < n;i=i+2){
            if(mp[i]==true) o.pb(i);
        }
        sortall(e); sortall(o);
        for (int i = 0; i < e.size();i++)   ans1 += abs(e[i] - o[i]);
       
        o.clear(); e.clear();
        for (int i = 0; i < n; i = i + 2) {
            if (mp[i] ==true) o.pb(i);
        }
        for (int i = 1; i < n; i=i+2)
        {
            if (mp[i] == false) e.pb(i);
        }
        sortall(e); sortall(o);
        for (int i = 0; i < e.size(); i++) ans2 += abs(e[i] - o[i]);
       // cout << ans1 << " " << ans2 << endl;
        ans = min(ans1, ans2);
        cout << ans << endl;
        return;
    }
    if(odd>even){
        for (int i = 0; i < n; i = i + 2)
        {
            if (mp[i] == true)
                o.pb(i);
        }
        for (int i = 1; i < n; i = i + 2)
        {
            if (mp[i] == false)
                e.pb(i);
        }
        sortall(e);
        sortall(o);
        for (int i = 0; i < e.size(); i++)
            ans += abs(e[i] - o[i]);
        cout << ans << endl;
        return;
    }
    if(even>odd){
        // lets consider 1st element to be even
        for (int i = 0; i < n; i = i + 2)
        {
            if (mp[i] == false)
                e.pb(i);
        }
        for (int i = 1; i < n; i = i + 2)
        {
            if (mp[i] == true)
                o.pb(i);
        }
        sortall(e);
        sortall(o);
        for (int i = 0; i < e.size(); i++)
            ans += abs(e[i] - o[i]);
        cout << ans << endl;
    }
    mp.clear();o.clear(); e.clear();
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }