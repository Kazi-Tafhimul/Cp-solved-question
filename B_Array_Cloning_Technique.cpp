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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll,ll>freq;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        ll mx_freq=0;
        for(auto u:freq){
            mx_freq = max(mx_freq,u.second);
        }
        ll ans =0;
        while(mx_freq<n){
            ll rem = n-mx_freq;
            ll add = mx_freq;
            ans++;
            ans+=min(add,rem);
            mx_freq += min(add,rem);


        }
        cout<<ans<<endl;
    }
    return 0;
}