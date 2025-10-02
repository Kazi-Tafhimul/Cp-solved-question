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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        if(a>c && b>=d || a>=c && b>d){
            ans+=2;
        }
        if(a>d && b>=c||a>=d && b>c){
            ans+=2;
        }
        cout<<ans<<endl;
    }

    return 0;
}