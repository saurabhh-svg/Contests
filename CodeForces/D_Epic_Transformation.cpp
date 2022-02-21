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
    ll n,x; cin >> n;
    map<int, int> mp;
    fl(i, n) {
        cin >> x;
        mp[x]++;
    }
    // priority queue stores data in descending order of value
    // maximum frequecy first then 2nd max........
    // pop out top 2 frequencies and subtract 1 if result is non zero for either one freq then push back the freq
    // else move forward till q is empty

    priority_queue<int> q;
    for (auto it : mp)  q.push(it.second);
    // atleast 2 elements to make a pair
    while (q.size() >= 2)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        a--;
        b--;
        if(a>0)
            q.push(a);
            if(b>0)
                q.push(b);
    }
    if(q.size()==0){
        cout << 0 << endl;
        return;
    }
    cout << q.top() << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }