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
    vector<pair<int, bool> > v(n);
    fl(i, n){
        cin >> x;
        v.pb((make_pair(x, true)));
    }

for (int i = 1; i < 32;i++){
    for (int j = 0; j < n;j++){
        if (v[i].first & (1 <<i )){
             
        }
    }
}
}

    //===========MAIN BEGIN===========

    int main()
    {
        _ fs
            ll test;
        cin >> test;
        while (test--)
            solve();
        return 0;
    }