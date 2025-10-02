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
        ll n,k;
        cin>>n>>k;

        vector<ll>ans,a(n);
        vector<pair<ll,ll>>p;
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                ans.push_back(i+1);
            }
            else{
                p.push_back({a[i]%k,i+1});
            }
        }
        sort(p.begin(),p.end(),[&](pair<ll,ll>x,pair<ll,ll>y){
            if(x.first==y.first){
                return (x.second<y.second);
            }
            return (x.first>y.first);

        });
        for(auto x:p){
            ans.push_back(x.second);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}