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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<pair<ll,ll>,ll>mp;
        ll ans=0;
        for(int i=0;i<n;i++){
            ll modx = (x-v[i]%x)%x;
            ll mody = v[i]%y;
            ans+=mp[{modx,mody}];
            mp[{v[i]%x,v[i]%y}]++;

        }
        cout<<ans<<endl;
    }
    return 0;
}