#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
ll sum(ll n){
    return (n*(n+1))/2;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll a = n/x;
        ll b = n/y;
        ll lcm = (x*y)/gcd(x,y);
        ll cmn = n/lcm;
        ll a1 = a-cmn;
        ll b1 = b-cmn;
        cout<<(sum(n)-sum(n-a1))-sum(b1)<<endl;



    }
    return 0;
}