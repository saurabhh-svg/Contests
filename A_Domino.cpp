#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,l,u,lsum=0,usum=0,flag=0;
    cin >> n;
    fl(i, n)
    {
        cin >> l>>u;
       if(l%2 != u%2)
           flag = 1;
       lsum += l;
       usum += u;
    }
    if(lsum%2==0 && usum%2==0)
        cout << "0" << endl;
        else if((lsum%2 != usum%2)||(usum%2==1 && flag==0))
        cout << "-1" << endl;
        else
            cout << 1 << endl;
}
int main(){ _
//ll test;
 //cin>>test;
 //while(test--){
solve();
//}
return 0;
 }