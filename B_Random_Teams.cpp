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
    ll n,m,k,mn,mx;
    cin >> n>>m;
    //no. of pairs = n(n-1)/2
    k = n / m;
    ll last = n % m;
    mx = (n - (m - 1)) * (n - (m - 1) - 1) / 2;

    //mn = (m-1)*(k*(k-1)/2) + (k+last)*(k+last-1)/2;
    mn = last * (k + 1) * (k + 1 - 1) / 2 + (m - last) * (k * (k - 1)) / 2;
    cout << mn << " " << mx << endl;
}

//===========MAIN BEGIN===========

int main(){ _

solve();

return 0;
 }