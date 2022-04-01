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
ll n; cin >> n;
if (n < 1200)
    puts("1200");
else if (n < 1400)
    puts("1400");
else if (n < 1600)
    puts("1600");
else if (n < 1900)
    puts("1900");
else if (n < 2100)
    puts("2100");
else if (n < 2300)
    puts("2300");
else if (n < 2400)
    puts("2400");
else if (n < 2600)
    puts("2600");
else
    puts("3000");
}

//===========MAIN BEGIN===========

int main(){ _ fs

solve();
return 0;
 }