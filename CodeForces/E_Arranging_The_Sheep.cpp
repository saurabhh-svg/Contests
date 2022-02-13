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
    ll n,c=0,midsheep=0,k=0,ans=0;
    cin >> n;
    string s;
    cin >> s;
    fl(i,n){
        if(s[i]=='*')
            c++;
    }
    c = (c+1) / 2;
    fl(i,n){
      if(s[i]=='*'){
          k++;
          if(k==c){
              midsheep = i;
          break;
      }
      }
    }
    c = 0;

    // Trying to arrange the sheeps in middle
    for (int i = midsheep; i >=0;i--){
               if(s[i]=='.')
                  c++;
              else
        ans = ans + c;
    }
    c = 0;
    for (int i = midsheep + 1; i < n; i++)
    {
        if (s[i] == '.')
            c++;
        else
            ans = ans + c;
    }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }