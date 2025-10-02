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
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int l = max(a,x);
        int r = min(b,y);
        if(r<l){
            cout<<1<<endl;
        }
        else if(a==x && b==y){
            cout<<b-a<<endl;
        }
        else{
            int ans=0;
            if(min(a,x)<max(a,x)){
                ans++;

            }
            if(min(b,y)<max(b,y)){
                ans++;
            }
            ans+=r-l;
            cout<<ans<<endl;

        }
         


        }
    
    return 0;
}