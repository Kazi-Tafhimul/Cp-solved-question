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
        ll n0=3,n1=1,n3=1,n2=2,n5=1;
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            if(v[i]==0)n0--;
            if(v[i]==1)n1--;
            if(v[i]==3)n3--;
            if(v[i]==2)n2--;
            if(v[i]==5)n5--;
            if(n0<=0&& n1<=0 && n3<=0 && n2<=0 && n5<=0){
               ans=i+1;
               break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}