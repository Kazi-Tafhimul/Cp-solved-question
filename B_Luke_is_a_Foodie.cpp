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
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll l = a[0]-x;
        ll r = a[0]+x;
        ll c = 0;
        for(ll i=1;i<n;i++){
            l = max(l,a[i]-x);
            r = min(r,a[i]+x);
            if(l>r){
                c++;
                l = a[i]-x;
                r = a[i]+x;
            }

        }
        cout<<c<<endl;
    }
    return 0;
}