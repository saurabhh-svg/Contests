#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int l, r, mod = 998244353;
    cin >> l >> r;
int maxSize=0, maxNum=0;
int i=l,l1=l;
while(l1<=r){
    maxSize++;
    i *= 2;
    l1 *= 2;
}
 i = i / 2;
 maxNum= i - l + 1;
 int temp=r/i;
 i = i / 2;
 i = i * 3;
 int ans1 = l - 1;

 int st = l, en = temp;
 while(st<=en){
    int mid=(st+en)/2;
    if(i*mid<=r){
        ans1 = mid;
        st = mid + 1;
    }
    else     en = mid - 1;
 }
 int temp2 = ans1 - l + 1;
 temp2=(temp2*(maxSize-1))%mod;
 maxNum=(maxNum+temp2)%mod;
 cout << maxSize % mod << " " << maxNum << "\n";
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }

 // 3 6 9 12 15 18 21 24 27 