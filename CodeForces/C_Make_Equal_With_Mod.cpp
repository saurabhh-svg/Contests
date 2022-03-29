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
    ll n; cin >> n;
    bool z = false, o = false;
    vector<ll> v(n);
    fl(i, n) {
        cin >> v[i];
        if(v[i]==1) o = true;
        if(v[i]==0) z = true;
    }
    sortall(v);
    if (z && o)
    {
        cout << "NO" << endl;
        return;
    }
    if(o){
        fl(i,n-1){
            if(v[i+1]-v[i]==1){

                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }