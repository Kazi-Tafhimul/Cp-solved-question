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
        ll a,b,c;
        cin>>a>>b>>c;
        if((b-a)==(c-b)){
            cout<<"YES"<<endl;
            continue;
        }
       else if((2*b)-c>0 && ((2*b)-c)%a==0){
        cout<<"YES"<<endl;
        continue;
       }
       else if((2*b)-a>0 && ((2*b)-a)%c==0){
        cout<<"YES"<<endl;
        continue;
       }
       else if((a+c)%(2*b)==0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }


        
    }
    return 0;
}