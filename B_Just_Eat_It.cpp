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
        ll preSum=0,sufSum=0,f=1;
        for(int i=0;i<n;i++){
            cin>>v[i];


        }
        for(int i=0;i<n;i++){
            preSum+=v[i];
            if(preSum<=0){
                f=0;
                break;

            }
        }
        if(f){
            for(int i=n-1;i>=0;i--){
                sufSum+=v[i];
                if(sufSum<=0){
                    f=0;
                    break;
                }
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}