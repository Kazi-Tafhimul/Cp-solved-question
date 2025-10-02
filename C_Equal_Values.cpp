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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll a=0,b=0,ans=LLONG_MAX;
        while(a<n){
            while(b<n && v[a]==v[b]){
                b++;
            }
            ans = min(ans,a*v[a]+(n-b)*v[b-1]);
            a=b;


        }
        cout<<ans<<endl;
    }
    return 0;
}