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
    ll n,left=1,right=1;
    bool flag = true;
    cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    for (int i = 0; i < n;i++){
        if(v[i]==1) left = i;
        else {
            flag = false;
            break;
        } 
    }
    for (int i = n - 1; i >= 0;i--){
        if(v[i]==1) right = i;
           else break;
    }
    ll ans =(right -  left);
    if(!flag)
    cout << ans << endl;
    else
        cout << 0 << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }