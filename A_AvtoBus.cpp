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
        if(n%2==1|| n<4){
            cout<<-1<<endl;
            continue;
        }
        ll mn,mx;
        mn = n/6;
        mx = n/4;
        if(n%6==2 && n-8>=0){
            mn = (n-8)/6+2;
        }
        else if(n%6==4 && n-4>=0){
            mn = (n-4)/6+1;
        }
        cout<<mn<<" "<<mx<<endl;
     
        
    }
    return 0;
}