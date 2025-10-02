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
    ll mod = 1e9+7;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans=1;
        for(int i=0;i<n;i++){
            if(a[i]<=b[i]){
                ans=0;
                break;
            }

        }
        if(!ans){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            ll l = i,r=n-1,ind;
            while(l<=r){
                ll mid = l+(r-l)/2;
                if(a[i]>b[mid]){
                    ind = mid;
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }

            }
            ll pos = ind-i+1;
            ans*=pos;
            ans%=mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}