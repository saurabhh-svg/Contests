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
    ll n,m;
    cin >> n;
    m = n;
    m = m / 10;
    if (n % 7 == 0)
    {
        cout << n << endl;
        return;
    }
    if(n<20 && n%7!=0){
        cout << 14 << endl;
        return;
    }
    int rem = n % 7;
    int y = 7 - rem;
    int lasttwo = m%10;
    ll x = n + y;
    ll z = n - rem;
    x = x / 10;
    z = z / 10;
    if ((x%10)==lasttwo)
        cout << n + y<<endl;
        else
            cout << n - rem<<endl;
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