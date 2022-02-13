#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;


int main() {int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n==2){
        cout<<"NO"<<endl;
        continue;
    }
    cout<<"YES"<<endl;
    int st=1;int en=n;
    if(n%2==1){
    while(st<en){
        cout<<st<<" "<<en<<" ";
        st++;en--;
    }
        cout<<st;
    }
    else{
        cout<<n/2;
         while(st<en){
             cout<<" ";
             if(n/2!=st)
        cout<<st<<" ";
             cout << en;
             st++;
             en--;
    }
    }
    cout<<endl;
   
}
	return 0;
}