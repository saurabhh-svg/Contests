#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void SieveOfEratosthenes(){
    ll range = 1000000;
    int prime[1000001] = {0};
    for (ll i = 2; i <= range; i++){
        if(prime[i]==0){
        for (ll j = i * i; j <= range;j=j+i)
            prime[j] = 1;
        }
    }
    ll n,z;
           cin >> n;
    fl(i,n){
        cin >> z;
        //cout << prime[sqrt(z)] << " ";
        ll x = sqrt(z);
        if(x*x==z && z>1){
        if (prime[x] == 0)
            cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
            else
                cout << "NO" << endl;
    }
}

int main(){
    _ SieveOfEratosthenes();
    return 0;
 }