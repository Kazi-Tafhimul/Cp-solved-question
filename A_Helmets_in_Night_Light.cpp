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
        ll n,p,c=1,ans;
        cin>>n>>p;
        ans=p;
        vector<pair<ll,ll>>v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i].second;

        }
        for(int i=0;i<n;i++){
            cin>>v[i].first;
        }
        
        sort(v.begin(),v.end());
        for(auto[f,s]:v){
            if(f>p){
                break;

            }
            ans+=f*min(s,n-c);
            c+=min(s,n-c);

        }
        ans+=p*(n-c);
        cout<<ans<<endl;


    }
    return 0;
}