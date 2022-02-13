#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,z,sum=0,rem=0,factor=0;
    vector<int> v;
    cin >> n;
    fl(i,n){
        cin >> z;
        v.pb(z);
        sum += z;
    }
   ll mn = *min_element(v.begin(), v.end());
   ll mnindex=min_element(v.begin(),v.end()) - v.begin();

    if ((sum & (sum - 1)) == 0)
    { // if sum is power of 2
        cout << 0 << endl;
        return;
    }
    ll bit=log2(sum);
    rem = pow(2, (bit + 1)) - sum; //diff bw next pow of 2 and current sum

  factor = (rem+v[0])/mn;
  cout << "1" << endl;
  cout << "1"
       << " " << factor << endl;
  cout << mnindex+1 << endl;
}

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }