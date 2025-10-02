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
        ll x,n,ans;
        cin>>x>>n;
        ll t = n%4;
        if(x%2==0){
            if(t==0){
                ans = x;

            }
            else if(t==1){
                ans = x-n;
            }
            else if(t==2){
                ans = x+1;
            }
            else if(t==3){
                ans = x+n+1;
            }

        }
        else if(x%2==1){
            if(t==0){
                ans = x;
            }
            else if(t==1){
                ans = x+n;
            }
            else if(t==2){
                ans = x-1;
            }
            else if(t==3){
                ans = x-n-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}