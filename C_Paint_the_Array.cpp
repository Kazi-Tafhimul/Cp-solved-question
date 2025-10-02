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
        vector<ll>v(n);
        ll gc1=0,gc2=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                gc1 = gcd(gc1,v[i]);

            }
            else{
                gc2 = gcd(gc2,v[i]);
            }
        }
        ll a=1,b=1;
        for(int i=0;i<n;i+=2){
            if(v[i]%gc2==0){
                a=0;
                break;
            }
        }
        for(int i=1;i<n;i+=2){
            if(v[i]%gc1==0){
                b=0;
                break;

            }
        }
        if(a==0 && b==0){
            cout<<0<<endl;

        }
        else if(a==0){
            cout<<gc1<<endl;
        }
        else{
            cout<<gc2<<endl;
        }
    }
    return 0;
}