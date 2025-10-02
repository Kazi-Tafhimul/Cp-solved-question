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
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(a>b)swap(a,b);
        if(b%a!=0){
            cout<<-1<<endl;
            continue;
        }
        ll n = b/a;
        ll c=0;
        while(n%8==0){
            n/=8;
            c++;
        }
        while(n%4==0){
            n/=4;
            c++;
        }
        while(n%2==0){
            n/=2;
            c++;
        }
        if(n!=1)cout<<-1<<endl;
        else{

            cout<<c<<endl;
        }


    }
    return 0;
}