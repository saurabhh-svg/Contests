#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    int sum,index=-1,flag=0;
    string s,ans=" ";
    cin >> s;
    ll l = s.length();

 for(int i=0;i<l-1;i++){
        sum = s[i] - '0' + s[i + 1] - '0';
        if (sum >=10)
            index = i;
    }
    if (index > -1)
    {
        for (int i = 0; i < index;i++)
            cout << s[i];
       cout <<s[index]-'0'+s[index+1]-'0';
        for (int i = index+2; i < l;i++)
            cout << s[i];
        cout << endl;
        return;
    }
     sum = s[0] - '0' + s[1] - '0';
     cout << sum;
     for (int i = 2; i < l; i++) cout << s[i];
     cout << endl;

}

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }

 