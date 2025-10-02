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
        mp[0]=1;
        ll s=0,f=1;
        for(int i=0;i<n;i++){
            if(i%2){
                s+=-1*v[i];
                
            }
            else{
                s+=v[i];
            }
            if(mp[s]){
                cout<<"YES"<<endl;
                f=0;
                break;

            }
            mp[s]++;
        }
        if(f){
            cout<<"NO"<<endl;
        }


    }
    return 0;
}