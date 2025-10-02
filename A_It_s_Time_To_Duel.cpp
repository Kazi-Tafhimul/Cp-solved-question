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
        
        ll z=0,o=0;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                z++;
            }
            else{
                o++;
            }
        }
        if(z==n || o==n){
            cout<<"YES"<<endl;
            continue;
        }
        ll f=1;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1] && v[i]==0){
                cout<<"YES"<<endl;
                f=0;
                break;
            }
        }
        if(f)cout<<"NO"<<endl;
        
        
       
    }
    return 0;
}