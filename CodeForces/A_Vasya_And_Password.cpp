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
bool valid(string s,int l){
  int lo=0, up=0, d = 0;
    fl(i, l){
        if (s[i] >= 'a' && s[i] <= 'z') lo++;
         if (s[i] >= 'A' && s[i] <= 'Z') up++;
          if (s[i] >= '0' && s[i] <= '9') d++;
    }
    if(lo>0&&up>0&&d>0)
        return true;
    return false;
}
void solve(){
    string s,x;
    int lo=0, up=0, d = 0;
    cin >> s;
    int l = s.length();
    if(valid(s,l)){
        cout << s << endl;
    return;
}
x = s;
fl(i, l){
    x = s;
    x[i] = 'A';
    if (valid(x, l))
    {
        cout << x << endl;
          return;
    }
         x[i] = '1';
        if(valid(x,l)){
        cout << x << endl;
          return;
    }
        x[i] = 'a';
        if(valid(x,l)){
        cout << x << endl;
          return;
    }
}
if(isupper(s[2])){
    s[0] = 'a';
    s[1] = '1';
}
if(islower(s[2])){
    s[0] = 'A';
    s[1] = '1';
}
if(isdigit(s[2])){
    s[0] = 'a';
    s[1] = 'A';
}
cout << s << endl;
}

//===========MAIN BEGIN===========

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }