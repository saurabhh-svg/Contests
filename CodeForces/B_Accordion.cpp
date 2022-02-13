#include <bits/stdc++.h>
#include<unordered_map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cn(arr,n) for(int i=0;i<n;i++)cin>>arr[i]
#define ct(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;



void solve(){
    string s;
    cin >> s;
    int l = s.length(),flag=0;
    fl(i,l){
        if(s[i]!='['){
        s.erase(s.begin() + i);
        l--;
        }else
            flag = 1;
    }
   if(flag==1){
       flag = 0;
       fl(i, l) {
           if (s[i] != ':')   {
               s.erase(s.begin() + i);
               l--;
           } else flag = 1;
       }
       if(flag==1){
     flag = 0;
     for (int i = l - 1; i >= 0;i--)
         {
             if (s[i] != ']')
             {
                 s.erase(s.begin() + i);
                 l--;
             } else flag = 1;
         }
         if(flag==1){
          flag = 0;
        for (int i = l - 1; i >= 0;i--){
           if (s[i] != ':')   {
               s.erase(s.begin() + i);
               l--;
           } else flag = 1;
       }
   }
    else{
           cout << "-1" << endl;
           return;
       }
   
        fl(i, s.size())
        {
        }
}
   }
}


//===========MAIN BEGIN===========

int main(){ _

solve();

return 0;
 }