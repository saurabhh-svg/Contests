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
    ll n,x; cin >> n;
    vector<ll> even,odd;
    fl(i,n){
        cin >> x;
        if(x%2==0) even.pb(x);
        else odd.pb(x);
    }
    if(odd.size()<2 || (even.size()==0 && odd.size()%2==1)){
        cout << "-1" << endl;
        return;
    }
    if(odd.size()%2==0){
        fl(i, even.size()) cout << even[i] << " ";
        fl(i, odd.size()) cout << odd[i] << " ";
        cout << endl;
    }
    else{
        fl(i, even.size() - 1) cout << even[i] << " ";
        cout << odd[0] << " "<<even[even.size()-1]<<" ";
        for (ll i = 1; i < odd.size();i++)
            cout << odd[i] << " ";
        cout << endl;
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