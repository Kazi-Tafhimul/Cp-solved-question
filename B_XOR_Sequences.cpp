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
        ll  a,b;
        cin>>a>>b;
        for(int i=0;i<=30;i++){
            if(((a>>i)&1)!=((b>>i)&1)){
                cout<<(1LL<<i)<<endl;
                break;
            }
        }
    }
    return 0;
}