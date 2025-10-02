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
        vector<ll>a(n),b(n),c(n);
        vector<pair<ll,ll>>v1,v2,v3;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v1.push_back(make_pair(a[i],i));
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            v2.push_back(make_pair(b[i],i));
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
            v3.push_back(make_pair(c[i],i));
        }
        sort(v1.begin(),v1.end(),greater<>());
        sort(v2.begin(),v2.end(),greater<>());
        sort(v3.begin(),v3.end(),greater<>());
        ll ans = 0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(v1[i].second!=v2[j].second && v1[i].second!=v3[k].second && v2[j].second!=v3[k].second){
                        ans = max(v1[i].first+v2[j].first+v3[k].first,ans);

                    }
                }
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}