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
        string s;
        cin>>s;
        s = '$'+s;
        vector<ll>v(n+1,0);
        for(int i=1;i<=n;i++){
            if(s[i]=='1'){
                v[i]=1;
            }
        }
        ll ans=0;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                if(v[j]==0){
                    v[j]=2;
                    ans+=i;

                }
                else if(v[j]==1){
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}