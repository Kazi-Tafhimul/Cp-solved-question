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
        ll n,m;
        cin>>n>>m;
        vector<ll>v[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll x;
                cin>>x;
                v[j].push_back(x);
            }
        }
        for(int i=0;i<m;i++){
            sort(v[i].begin(),v[i].end());

        }
        ll ans=0;
        for(int i=0;i<m;i++){
            vector<ll>res(n,0);
            res[n-1] = v[i][n-1];
            for(int j=n-2;j>=0;j--){
                res[j] = res[j+1] + v[i][j];

            }
            for(int j=0;j<n-1;j++){
                ll cnt = res[j+1] - (n-j-1)*v[i][j];
                ans+=cnt;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}