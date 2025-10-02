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
        ll n,l,r;
        cin>>n>>l>>r;
        l--,r--;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll>lf,rh;
        for(int i=0;i<=r;i++){
            lf.push_back(a[i]);


        }
        for(int i=l;i<n;i++){
            rh.push_back(a[i]);
        }
        sort(lf.begin(),lf.end());
        sort(rh.begin(),rh.end());
        ll sum1 = accumulate(lf.begin(),lf.begin()+r-l+1,0LL);
        ll sum2 = accumulate(rh.begin(),rh.begin()+r-l+1,0LL);
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}