#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int r=2*m,ans=0;
        if(a>m){
            ans+=m;
            r=r-m;
        }
        else{
            ans+=a;
            r=r-a;
        }
         if(b>m){
            ans+=m;
            r=r-m;
        }
        else{
            ans+=b;
            r=r-b;
        }
        if(c>r){
            ans+=r;
            
        }
        else{
            ans+=c;
        }
        cout<<ans<<endl;

    }
    return 0;
}