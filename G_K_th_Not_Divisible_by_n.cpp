#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ans;
        ll l=1,r=1e18;
        while(l<=r){
            ll mid=(l+r)/2;
            ll d = mid-(mid/n);
            
            if(d>=k){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}