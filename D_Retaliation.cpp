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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(2*v[0]-v[1]<0 || (2*v[0]-v[1])%(n+1)!=0){
            cout<<"NO"<<endl;
            continue;
        }
        ll x2 = (2*v[0]-v[1])/(n+1);
        ll x1 = v[0] - n*(x2);
        if(x1<0){
            cout<<"NO"<<endl;
            continue;
        }
        bool result = true;
        for(int i=1;i<=n;i++){
            if(v[i-1] - i*x1 - (n-i+1)*x2 !=0){
                result = false;
            }

        }
        if(result){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}