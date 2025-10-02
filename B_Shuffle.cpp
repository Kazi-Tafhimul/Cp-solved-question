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
        ll n,x,m,l,r;
        cin>>n>>x>>m;
        ll a=x,b=x;
        for(int i=0;i<m;i++){
            cin>>l>>r;
            if(a>=l && a<=r){
                a=l;
            }
            if(b>=l && b<=r){
                b=r;
            }
        }
        cout<<b-a+1<<endl;
        
    }
    return 0;
}