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
    ll n,x;
    cin >> n;
    vector<int> v(n), vs(n);
    fl(i, n){
        cin >> x;
        v.pb(x);
    }
    vs = v;
    sortall(vs);
    if(v==vs){
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i <n;i++){
        for (int j = i;j < n; j++){
            if(((v[i]&v[j])>0) && v[i]>v[j])
                swap(v[i], v[j]);
        }
    }
    if(v==vs)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }