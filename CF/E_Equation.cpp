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
    long double c,x;
    cin >> c;
   long double l = 0, h = c,mid;
   mid=(l+h)/2;
  while(h>l){
      mid = (l + h) / 2;
      cout << mid << endl;
      if ((pow(mid, 2) + pow(mid, 0.5)) == c)
      {
          x = mid;
          break;
      }
     else if ((pow(mid, 2) + pow(mid, 0.5)) < c)
         l = mid + 1;
     else
         h = mid - 1;
  }
       x = mid;
   cout << fixed << setprecision(10) << x << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs

solve();
return 0;
 }