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
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(int i=0;i<n;i++){
            ll val  = v[i];
            if(mp[v[i]]!=0){
                ans++;
                while(mp[val]>0){
                    
                    mp[val]--;
                    val++;

                }

            }
        }
        cout<<ans<<endl;

    }
    return 0;
}