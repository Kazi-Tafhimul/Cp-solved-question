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
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll up=-1;
    map<ll,ll>mp;
    while(q--){
        ll t;
        cin>>t;
        if(t==1){
            ll i,x;
            cin>>i>>x;
            if(up==-1){
                if(x>=a[i-1]){
                    sum+=x-a[i-1];
                }
                else{
                    sum-=a[i-1]-x;
                }
                a[i-1]=x;
                cout<<sum<<endl;
            }
            else{
                ll z;
                if(mp[i-1]==0)z=up;
                else{
                    z=mp[i-1];
                }
                if(x>=z){
                    sum+=x-z;

                }
                else{
                    sum-=z-x;

                }
                cout<<sum<<endl;
                mp[i-1]=x;
            }
        }
        else{
            ll x;
            cin>>x;
            sum=n*x;
            mp.clear();
            up=x;
            cout<<sum<<endl;
        }
    }
    return 0;
}