#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;
int main(){
    _
        ll n;
    cin >> n;
for (int k = 0; k < n;k++)
                cout <<"  ";
                cout<<0<<endl;
    for (int i = 1; i < n;i++){
            for (int k = i; k < n;k++)
                cout <<"  ";
                
                for (int k = 0; k <= i;k++)
                cout << k<<" ";
                 for (int k = i-1; k >=0 ;k--){
                   cout <<k;
                 if(k!=0)
                   cout<<" ";
                }
                cout << endl;
    }

    for (int k = 0; k <= n;k++)
        cout << k<<" ";
         
         for (int k = n-1; k >= 0;k--){
             cout << k;
                if(k!=0)
                cout<<" ";
        }
         cout << endl;

         for (int i = n; i >1;i--){
            for (int k = i; k<= n;k++)
                cout <<"  ";
                
                for (int k = 0; k < i;k++)
                cout << k<<" ";
                 for (int k = i-2; k >=0 ;k--){
                   cout <<k;
                 if(k!=0)
                   cout<<" ";
                }
             cout << endl;
    }
     for (int k = 0; k < n;k++)
                cout <<"  ";
                cout<<0;

        return 0;
}