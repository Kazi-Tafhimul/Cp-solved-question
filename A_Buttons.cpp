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
        if(c%2==0){
            a+=c/2;
            b+=c/2;
        }
        else{
            a+=c/2+1;
            b+=c/2;
        }
        if(a>b)cout<<"First"<<endl;
        else{
            cout<<"Second"<<endl;
        }


    }
    return 0;
}