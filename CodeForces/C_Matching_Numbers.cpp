#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << "YES" << endl;
        cout << "1 2" << endl;
        return;
    }
    if((n*2)%6!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout << "YES" << endl;
    int st = n;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }