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
        ll n,x;
        cin>>n>>x;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll l=1,r=1e10;
        while(l<=r){
            ll tw=0;
            ll mid = l+(r-l)/2;
            for(int i=0;i<n;i++){
                if(a[i]<mid){
                    tw+=mid-a[i];
                }
               

            }
            if(tw>x){
                r=mid-1;

            }
            else{
                ans = mid;
                l = mid+1;


            }
        }
        cout<<ans<<endl;
    }
    return 0;
}