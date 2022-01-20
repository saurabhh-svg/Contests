#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;
int digitSum(int num){
    int sum=0;
    while(num>0){
        sum=sum+(num%10);
        num/=10;
    }
    //cout<<sum<<"\n";
    return sum;
}

// Function that gives sum of squares of digits of numbers
int squareSum(int num){
    int sum=0,rem;
    while(num>0){
        rem=num%10;
        sum=sum+rem*rem;
        num/=10;
    }
    //cout<<sum<<"\n";
    return sum;
}

//Function that checks number is prime or not
bool isPrime(int n)
{
    // return false as 1 is neither prime nor composite
    if (n == 1)
        return false;

    // loop from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

//Function to check a number is lucky or not
bool isLucky(int n){
    int d_s=digitSum(n); //holds sum of all digits of n
    int s_s=squareSum(n); //holds sum of square of all digits of n

    //return true only if both d_s and s_s are prime
    if(isPrime(d_s) && isPrime(s_s))
        return true;
    else    
        return false;
}
void solve(){
    ll l, r,ans=0;
    cin >> l >> r;
    vector<ll> v;
    v.pb(4);
    v.pb(7);
    v.pb(44);
    v.pb(77);
    v.pb(444);
    v.pb(474);
    for (ll i = 477; i <= 10000000; i=i+3)
    {
        int flag = 1;
        string s = to_string(i);
        for (int j = 0; j < s.length(); j++)  {
            if (s[j] == '4' || s[j] == '7'){
                continue;
            }
            else {
                flag = 0;
                break;
            }
         }
            if(flag==1){
                v.pb(i);
            }
    }
    
    int ind;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j]>=l)
            ind = j;
        break;
    }
        for (int i = l; i <= r; i++)
        {
            if(v[ind]>=i)
                    ans = ans + v[ind];
            else{
                ind++;
                ans = ans + v[ind];
            }
            
        }
        cout << ans << endl;
}
int main(){
    _ solve();
    return 0;
 }