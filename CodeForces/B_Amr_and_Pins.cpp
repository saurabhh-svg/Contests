//*************************************************************
//-------------------Code By: Saurabh Singh-------------------
//*************************************************************

#include <bits/stdc++.h>
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
    ll r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    ll ans = 0;
    double dist = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    //cout << dist << endl;
    ll d = (dist / (2 * r));
    double rem = dist - d*(2 * r);

    ans = d + ceil(rem / (2 * r));
    cout << ans << endl;
}

//*****************************************************************
//----------------------------main begins---------------------------
//******************************************************************

int main(){
    _ solve();
    return 0;
 }