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
        vector<ll>v(n+1);
        map<ll,ll>cnt;
        
        for(int i=1;i<=n;i++){
            cin>>v[i];
            

        }
        ll f=1;
        for(int i=n;i>=1;i--){
            if(cnt[v[i]]==1){
                cout<<i<<endl;
                f=0;
                break;
            }
            else{
                cnt[v[i]]++;
            }

        }
        if(f)cout<<0<<endl;
    }
    return 0;
}