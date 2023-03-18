#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n;
cin >> n;
if(n==2){
    cout << -1 << endl;
    return;
}
int k = 1;
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < k;j++)
        cout << 1;
    for (int j = k; j < n;j++)
        cout << 0;
    cout << endl;
    k++;
}
cout << 10;
for (int i = 2; i < n;i++)
    cout << 1;
cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }

 /*
 10
 11

 100
 110
 101
 
 100 110 101 111 010 001
 
 1000
 1100
 1110
 1101

 */