#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,sum=0,z,flag=0,tf=0,f=0,h=0;
    cin >> n;
    fl(i,n){
        cin >> z;
        if(z==25)
            tf++;
        if(z==50){
        f++;
        tf--;
        }
        if(z==100){
            if(f>0){
                f--;
                tf--;
            }
            else{
                tf = tf - 3;
            }
        }
        if(tf<0)
            flag = 1;
    }
    if(flag==1)
        cout << "NO" << endl;
        else
            cout << "YES" << endl;
}
int main(){ _
/*ll test;
 cin>>test;
 while(test--){*/
solve();
//}
return 0;
 }