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
            ll x=2;
            while(x*x<=v[i]){
                while(v[i]%x==0){
                    mp[x]++;
                    v[i]/=x;
                }
                x++;
            }
            if(v[i]>1){
                mp[v[i]]++;
            }

        }
        ll f=1;
        for(auto u:mp){
            if(u.second % n==0){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                f=0;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}