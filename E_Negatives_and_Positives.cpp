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
        vector<ll>a(n);
        ll c=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0)c++;

        }
        for(int i=0;i<n;i++){
            a[i]=abs(a[i]);
        }
        if(c%2==0){
            for(int i=0;i<n;i++){
                sum+=abs(a[i]);
            }
        }
        else if(c%2==1){
            sort(a.begin(),a.end());
            
            for(int i=0;i<n;i++){
                sum+=abs(a[i]);
            }
            sum-=2*a[0];
        }
        cout<<sum<<endl;

    }
    return 0;
}