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
        ll n,m;
        cin>>n>>m;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            ll a = x%m;
            mp[a]++;
        }
        ll ans=0;
        for(auto c:mp){
            if(c.first==0)ans++;
            else if(2*c.first==m)ans++;
            else if(2*c.first<m || mp.find(m-c.first)==mp.end()){
                ll x = c.second, y = mp[m-c.first];
                ans+= 1+ max(0LL,abs(x-y)-1);
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}