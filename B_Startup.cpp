#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
       // cout<<123<<endl;
    int t;
    cin>>t;
    while(t--){
        ll n,k,ans=0;
        cin>>n>>k;
        vector<ll>v(k+10,0);
        for(int i=0;i<k;i++){
            ll ind,b;
            cin>>ind>>b;
            v[ind]+=b;

        }
       // for(int i=0;i<n;i++){
       //     cout<<v[i]<<" ";
       // }
       // for(int i=0;i<v.size();i++){
       //     cout<<v[i]<<" ";
//
       // }
       // cout<<endl;
 sort(v.rbegin(),v.rend());
 if(n>=k){
       for(int i=0;i<v.size();i++){
           // cout<<v[i]<<" ";
            ans+=v[i];

        }

 }
      else{
        for(int i=0;i<v.size()&&i<n;i++){
            ans+=v[i];
        }
      }
      cout<<ans<<endl;


    }
    return 0;
}