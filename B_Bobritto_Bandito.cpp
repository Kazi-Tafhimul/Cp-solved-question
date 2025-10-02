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
        ll n,m,l,r;
        cin>>n>>m>>l>>r;
        if(m<=r){
            cout<<0<<" "<<m<<endl;
        }
        else{
            cout<<r-m<<" "<<r<<endl;
        }
        
    }
    return 0;
}