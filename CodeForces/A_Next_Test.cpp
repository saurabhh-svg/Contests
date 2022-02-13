#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,a;
    int arr[5000] = {0};
    cin >> n;
    vector<int> v;
    fl(i,n){
        cin >> a;
        arr[a]++;
    }
    for (int i = 1; i <= 5000;i++){
        if(arr[i]==0){
            cout << i << endl;
            return;
        }
    }
}
int main(){ _

solve();

return 0;
 }