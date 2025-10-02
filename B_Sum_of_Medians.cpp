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
        ll m = n*k;
        vector<ll>a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        ll total =0;
        if(n==2){
            for(int i=0;i<m;i+=2){
                total+=a[i];
            }
            cout<<total<<endl;

        }
        else{
            ll pos = (n+1)/2;
            ll lft = n-pos;
            lft++;
            ll x=1,in=0;
            for(int i=m-1;i>=0;i--){
                if(x%lft==0){
                    total+=a[i];
                    in++;
                }
                x++;
                if(in>=k){
                    break;
                }
            }
            cout<<total<<endl;
           
        }
    }
    return 0;
}