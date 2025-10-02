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
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),x;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i =0;i<q;i++){
            ll y;
            cin>>y;
             if(x.empty()||x.back()>y){
                x.push_back(y);
             }
        }
        //sort(x.begin(),x.end());
        for(ll i=0;i<n;i++){
            for(auto u:x){
                if(a[i]%(1LL<<u)==0){
                    u = u-1;
                    a[i]+=(1LL<<u);
                }
            }
        }
        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}