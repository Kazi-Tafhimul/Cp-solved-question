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
        ll x,k;
        cin>>x>>k;
        if(x>1 && k>1){
            cout<<"NO"<<endl;
        }
        else if(x>1 && k==1){
            ll f=1;
            for(int i=2;i*i<=x;i++){
                if(x%i==0){
                    cout<<"NO"<<endl;
                    f=0;
                    break;
                }
            }
            if(f)cout<<"YES"<<endl;
        }
        else if(x==1 && k==1){
            cout<<"NO"<<endl;
        }
        else if(x==1 && k>2){
           cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}