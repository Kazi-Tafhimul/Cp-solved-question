#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       set<ll>vrt;
       for(int k=2;k<=1000;k++){
        ll val = 1+k;
        ll p = k*k;
        for(int i=2;i<=20;i++){
            val+=p;
            if(val>1e6){
                break;
            }
            vrt.insert(val);
            p*=k;

        }
       }
       if(vrt.count(n)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}