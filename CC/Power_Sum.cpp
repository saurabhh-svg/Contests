#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,z,sum=0,rem=0,s=0,indexi=0,indexj=0;
    vector<int> v;
    cin >> n;
    fl(i,n){
        cin >> z;
        v.pb(z);
        sum += z;
    }
    sort(vr(v));

    if ((sum & (sum - 1)) == 0)
    { // if sum is power of 2
        cout << 0 << endl;
        return;
    }
    ll bit=log2(sum);
    rem = pow(2, (bit + 1)) - sum;

    fl(i,n){
        s = 0;
        for (int j = i; j < n; j++)
        {
            s += v[j];
            if(s==rem){
                indexi = i;
                indexj = j;
                break;
            }
            if(s>rem){
                continue;
            }
        }
    }
    

    


}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }