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
    ll n;
    cin >> n;
    vector<pair<ll,ll> > v(n);
    fl(i, n){
        cin >> v[i].first;
        v[i].second = i + 1;
    } 
    sortall(v);

    if (n == 1)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    cout << v[0].second << " " << v[n-1].second << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }