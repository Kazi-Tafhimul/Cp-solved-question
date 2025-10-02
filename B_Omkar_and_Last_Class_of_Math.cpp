#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) __gcd(a,b)/(a*b);
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
        ll f=0;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        
        else{
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    cout<<n/i<<" "<<n-(n/i)<<endl;
                    f=1;
                    break;

                }
            }
            if(!f){
                cout<<1<<" "<<n-1<<endl;
            }
        }
    }
    
    return 0;
}