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
        ll c=0,op=0;
        for(int i=0;i<n;i++){
            if(v[i])c++;
            else if(v[i]==0){
                if(c){
                    c=0;
                    op++;
                }
            }
        }
        if(c){
            op++;
        }
        if(op==0){
            cout<<0<<endl;
        }
        if(op==1){
            cout<<1<<endl;
        }
        else if(op>=2){
            cout<<2<<endl;
        }
    }
    return 0;
}