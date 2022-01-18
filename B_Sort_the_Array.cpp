#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve(){
    int n;cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int st=-1;
    int en=n;
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        if(flag)
        {
            if(ar[i]<ar[i-1])
            {
                flag=false;
                st=i-1;
            }
        }
        else
        {
            if(ar[i]>ar[i-1])
            {
                en=i;
                break;
            }
        }
    }
    if(st!=-1)
    {
        reverse(ar+st,ar+en);
        for(int i=1;i<n;i++)
        {
            if(ar[i]<ar[i-1])
            {
                flag=false;
                break;
            }
            else
                flag = true;
        }
    }
    if(flag)
    {
         cout<<"yes\n";
        if(st==-1)  cout<<"1 1\n";
       else cout<<st+1<<" "<<en<<"\n";
    }
    else cout<<"no\n";
}




int main(){
    _ solve();
    return 0;
 }