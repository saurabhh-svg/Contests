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

void rotate(vector<int> &arr, int i,int j){
    while (i != j)   {
        swap(arr[i], arr[j]);
        i++;
    }
}

void solve(){
    ll n,c=1;
    cin >> n;
    vector<int> s(n),ind(n);
    fl(i,n) {
        cin >> s[i];
        ind[i] = i + 1;
    }
    int i = 0, j = 0;
    while(i<n){
        if ( i+1!=n && s[i] == s[i + 1]){
            i++; c++;
        }
        else {
            if(c<=1){
                cout << -1 << endl;
                return;
            } j = i - c+1;
           // cout << j << " " << i << endl;
            rotate(s, j, i);
            rotate(ind, j, i);
            c = 1;
            i++;
        }
    }
    for(int i:ind)  cout << i << " ";
    cout << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }