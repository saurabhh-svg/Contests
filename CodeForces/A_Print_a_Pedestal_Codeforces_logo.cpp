#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<ll>())
using namespace std;

void solve(){
ll n,a=0,b=0,c=0;
cin >> n;
n = n - 6;
a = b = c = n / 3;
if (n % 3 == 1)b++;
else if (n % 3 == 2){
    a++;
    b++;
}
cout <<  a+2 << " " <<  b+3 << " " << 1 + c << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }