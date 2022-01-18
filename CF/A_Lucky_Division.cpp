#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n, m, flag = 1;
    cin >> n;
    //if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 77 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 444 == 0 || n % 777 == 0 || n % 747 == 0 || n % 774 == 0)
    for (int i = 4; i <= n;i++){
        flag = 1;
        string m = to_string(i);
        for (int j = 0; j < m.length();j++){
            if(m[j]=='4' || m[j]=='7'){
                continue;
            }else{
                flag = 0;
                break;
            }
        }
           if(flag==1){
              if(n%i==0){
                 cout << "YES" << endl;
                  return;
                 }
        }
    }
            cout << "NO" << endl;
}
int main(){
    _ solve();
    return 0;
 }