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
    vector<int> v(n),t(n);
    fl(i, n) cin >> v[i];
    t = v;
    sortall(t);
    if(n==1){
        cout << -1 << endl;
        return;
    }
    int i = 0;
    while (i < n)  {
        if(t[i]==v[i]){
            if (i + 1 < n) swap(t[i], t[i + 1]);
            else swap(t[i - 1], t[i]);     
    } i++;
    }
   fl(i,n)  cout << t[i] <<" ";
    cout << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }