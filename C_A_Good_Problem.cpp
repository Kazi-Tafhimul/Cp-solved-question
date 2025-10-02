#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        if(n%2){
            cout<<l<<endl;
        }
        else if(n==2){
            cout<<-1<<endl;
        }
        else{
            ll f=0;
            ll p=1;
            while(p<=r){
                if(p>l){
                    f=1;
                    if(k<=n-2){
                        cout<<l<<endl;
                    }
                    else{
                        cout<<p<<endl;
                    }
                    break;
                }
                p*=2;
            }
            if(!f){
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}