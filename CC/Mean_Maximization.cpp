#include <bits/stdc++.h>
#include <iomanip>
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
    double n,z;
    vector<double> v;
    double mean1 = 0.0, mean2 = 0.0, ans = 0.0;
    cin >> n;
    fl(i, n){
        cin >> z;
        v.pb(z);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n-1;i++){
         mean1 += v[i];
    } 
    mean1 = mean1 / (n-1);
    mean2 = v[n - 1];

    ans = mean1 + mean2;

    cout <<fixed<<setprecision(6)<< ans << endl;
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