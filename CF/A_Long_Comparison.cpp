#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll x1, p1, x2, p2,mn;
    cin >> x1 >> p1 >> x2 >> p2;
    mn = min(p1, p2);
    p1 = p1 - mn;
    p2 = p2 - mn;
if (p1 >= 7)
			cout << ">" << endl;
		else if (p2 >= 7)
			cout << "<" << endl;
		else{

    fl(i, p1) x1 = x1 * 10;
    fl(i, p2) x2 = x2 * 10;
    if (x1 < x2)
				cout << "<" << endl;
			else if (x1 > x2)
				cout << ">" << endl;
			else
				cout << "=" << endl;
        }
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }