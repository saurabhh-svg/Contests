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
    ll n,aCount=0,bCount=0,cCount=0,diff=0,ans=INT_MAX,flag=0;
    cin >> n;
    string s; cin >> s;
    vector<int> aInd;
    fl(i, s.length()) {
        if(s[i]=='a') {aInd.pb(i);
        aCount++;
        }
    }
   if(aCount<2){
       cout << -1 << endl;
       return;
   }
   for (int i = 0; i < aInd.size()-1;i++) {
       int cnt[3] = {0};
       diff = aInd[i + 1] - aInd[i];
       for (int j = aInd[i]; j <= aInd[i + 1]; j++)   cnt[s[j] - 'a']++;
       
       if (cnt[0] > cnt[1] && cnt[0] > cnt[2])
       {
           flag = 1;
           ans = min(ans, diff);
       }
       else if (i + 2 < aInd.size()) {
           for (int j = aInd[i + 1] + 1; j <= aInd[i + 2]; j++)  {
               cnt[s[j] - 'a']++;
           }
           if (cnt[0] > cnt[1] && cnt[0] > cnt[2])
           {
               flag = 1;
               diff = aInd[i + 2] - aInd[i];
               ans = min(ans, diff);
           }
       }
   }
   if(flag==0) cout << "-1" << endl;
       else cout << ans + 1 << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }