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
        ll mod = 1e9+7;
        ll n,k;
        cin>>n>>k;
        ll ans=1;
        for(int i=0;i<k;i++){
            ans = (ans*n)%mod;


        }
        cout<<ans<<endl;
    }
    return 0;
}