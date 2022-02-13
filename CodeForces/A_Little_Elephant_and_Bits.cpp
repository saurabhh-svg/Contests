#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    string n;
    int flag = 0;
    cin >> n;
    int l = n.length();
    fl(i,l){
        if(n[i]=='0'){
            flag = 1;
            for (int j = i; j < l - 1; j++)
            {
                n[j] = n[j+1];
            }
            l = l - 1;
            break;
        }
    }
    if(flag==1){
    fl(i,l)
    cout << n[i];
    }
    else{
         fl(i,l-1)
    cout << n[i];
    }
}
int main(){
    _ solve();
    return 0;
 }