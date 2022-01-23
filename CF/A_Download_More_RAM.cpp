#include <bits/stdc++.h>
#include<unordered_map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cn(arr,n) for(int i=0;i<n;i++)cin>>arr[i]
#define ct(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;


void solve(){
    ll n, k,c=0;
    cin >> n >> k;
    vector<pair<int,int> > vp(n);
    fl(i, n) cin >> vp[i].first;
    fl(i, n) cin >> vp[i].second;
    sort(vp.begin(), vp.end()); //sorting .first
    fl(i,n){
        if(k>=vp[i].first)
            k += vp[i].second;
            else
                break;
    }
    cout << k << endl;
}

//===========MAIN BEGIN===========

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }