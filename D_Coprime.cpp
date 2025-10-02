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
        vector<ll>updated(1010);
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            updated[x] = i+1;
        }
        ll ans =-1;
        for(int i=1000;i>0;i--){
            for(int j=i;j>0;j--){
                if(updated[i] && updated[j] && gcd(i,j)==1){
                    ans = max(ans,updated[i]+updated[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}