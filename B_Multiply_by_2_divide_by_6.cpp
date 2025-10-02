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
        ll c2=0,c3=0;
        while(n%2==0){
            n/=2;
            c2++;
        }
        while(n%3==0){
            n/=3;
            c3++;
        }
        if(n==1 && c3>=c2){
            cout<<2*c3-c2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}