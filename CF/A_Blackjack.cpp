#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n;
    cin >> n;
    n = n - 10;
    if(n==0||n>11||n<0){
        cout << 0 << endl;
        return;
    }
   
    if(n==10){
        cout << 15 << endl;
        return;
    }
    cout << 4 << endl;
}
int main(){ _

solve();

return 0;
 }