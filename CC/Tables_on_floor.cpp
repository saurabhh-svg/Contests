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
    ll s, l, c, mn=0, mx = -1,up;
    cin >> s >> l >> c;
     mx = 4 * s + 4 * l;
      if(2*l >= s)
        mn = 4* l;
    else
        mn = 4 * l + 4 *(s - (2 * l));

        if(c<=mx && c>=mn && c%4==0){
           
            cout<<"YES"<<endl;
            cout<<mn<< " "<<mx<<"\n";
        }else
        cout << "NO" << endl;
       
    
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