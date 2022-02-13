#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;

void solve(){
  ll length,zero=0,one=0;
    cin >> length;
    string s; cin >> s;
    for (int i = 0; i < length;i++)  {
            if (s[i] == '0')    zero++;
            else  one++;
        }
        if(length%2==1){
            cout << "YES" << endl;
            return;
        }
    if( (zero%2==0 && one%2==0) || (zero==one)) cout << "YES" << endl;
        else  cout << "NO" << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }