#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,z,ans=0,sum=0;
   // vector<int> v;
    cin >> n;
    fl(i,n){
        cin >> z;
        sum += z;
       // v.pb(z);
    }
  if(sum%n==0)
      cout << n << endl;
      else
          cout << n - 1 << endl;
}
int main(){ _

solve();

return 0;
 }