//********************************************
//-----------Code By: Saurabh Singh-----------
//********************************************

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
int a,n;
cin >> a;
//n·(180 - a) = 360
//convex polygon
if(360%(180-a)==0)
        cout << "YES" << endl;
else
cout << "NO" << endl;
}

//**********************************************
//------------------main begins-----------------
//**********************************************

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }