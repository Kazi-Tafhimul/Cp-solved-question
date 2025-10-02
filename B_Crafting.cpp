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
        ll no = 0,f=0;
        ll m=0,r=LLONG_MAX;

        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                if(!no){
                    no=1;
                    m = b[i]-a[i];
                }
                else{
                    f=1;
                    break;
                }
            }
            else{
                r = min(r,a[i]-b[i]);


            }

           
        }
        if(f)cout<<"NO"<<endl;
        else if(r>=m)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
        


        
    }
    return 0;
}