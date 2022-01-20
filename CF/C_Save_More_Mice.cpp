//*************************************************************
//-------------------Code By: Saurabh Singh-------------------
//*************************************************************

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cin(arr,n)        for(int i=0;i<n;i++)cin>>arr[i]
#define cout(arr,n)       for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    int catpos = 0, ans = 0,v[k];
    for(int i=0;i<k;i++) cin >> v[i];
    sort(v, v + k);
    for (int i = k - 1; i >= 0; i--)
    {
        if(catpos<v[i]){
            ans++;
            catpos = catpos+ n - v[i];
        }
    }
    cout << ans << endl;
}

//*****************************************************************
//----------------------------main begins---------------------------
//******************************************************************

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }